/*
 * XREFs of NtGdiPolyPatBlt @ 0x140175E20
 * Callers:
 *     <none>
 * Callees:
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x14007A070 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?GrepPolyPatBlt@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z @ 0x1400807B8 (-GrepPolyPatBlt@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x140084B40 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x140084C80 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1400E810C (-vOrder@ERECTL@@QEAAXXZ.c)
 *     ??_5ERECTL@@QEAAXAEBU_RECTL@@@Z @ 0x14016D52C (--_5ERECTL@@QEAAXAEBU_RECTL@@@Z.c)
 *     ??0DWMSCREENREADMODIFYWRITEASSIST@@QEAA@AEAVXDCOBJ@@@Z @ 0x1401760D0 (--0DWMSCREENREADMODIFYWRITEASSIST@@QEAA@AEAVXDCOBJ@@@Z.c)
 *     ?bReadBackRect@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHPEBU_RECTL@@@Z @ 0x1401E7990 (-bReadBackRect@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHPEBU_RECTL@@@Z.c)
 */

__int64 __fastcall NtGdiPolyPatBlt(HDC a1, int a2, struct _POLYPATBLT *a3, unsigned int a4, unsigned int a5)
{
  unsigned int v8; // ebx
  int v9; // r14d
  __int64 v10; // rax
  __int64 i; // r10
  LONG v14; // r8d
  LONG v15; // r9d
  int v16; // ecx
  int v17; // r10d
  __int64 v18; // rax
  struct _RECTL v19; // [rsp+60h] [rbp-108h] BYREF
  struct _RECTL v20; // [rsp+70h] [rbp-F8h] BYREF
  _QWORD v21[14]; // [rsp+80h] [rbp-E8h] BYREF
  _BYTE v22[24]; // [rsp+F0h] [rbp-78h] BYREF
  __int64 *v23; // [rsp+108h] [rbp-60h]

  v8 = 1;
  v9 = 0;
  if ( a4 )
  {
    if ( a3 )
    {
      APIDCOBJ::APIDCOBJ((APIDCOBJ *)v21, a1);
      if ( v21[0] )
      {
        if ( a4 > 0xAAAAAAA )
          v8 = 0;
        else
          GreProbeUntrustedVaRange(a3, 0x18uLL, a4, 4uLL);
        if ( v8 )
        {
          if ( ((gajRop3[(unsigned __int8)a2] | gajRop3[BYTE1(a2)]) & 0xB2) != 0 )
          {
            DWMSCREENREADMODIFYWRITEASSIST::DWMSCREENREADMODIFYWRITEASSIST(
              (DWMSCREENREADMODIFYWRITEASSIST *)v22,
              (struct XDCOBJ *)v21);
            v10 = *v23;
            if ( *v23 && *(_DWORD *)(v10 + 492) && (*(_DWORD *)(v10 + 36) & 0x4000) != 0 )
            {
              for ( i = 0LL; (unsigned int)i < a4; i = (unsigned int)(v17 + 1) )
              {
                v14 = *((_DWORD *)a3 + 6 * i + 1);
                v15 = v14 + *((_DWORD *)a3 + 6 * i + 3);
                v16 = *((_DWORD *)a3 + 6 * i + 2);
                v19.left = *((_DWORD *)a3 + 6 * i);
                v19.top = v14;
                v19.right = v19.left + v16;
                v19.bottom = v15;
                ERECTL::vOrder((ERECTL *)&v19);
                if ( v17 )
                  ERECTL::operator|=(&v20, &v19);
                else
                  v20 = v19;
              }
              if ( !ERECTL::bEmpty((ERECTL *)&v20) )
                v9 = DWMSCREENREADMODIFYWRITEASSIST::bReadBackRect((DWMSCREENREADMODIFYWRITEASSIST *)v22, &v20);
            }
          }
          v8 = GrepPolyPatBlt(
                 (struct XDCOBJ *)v21,
                 a2,
                 a3,
                 a4,
                 a5,
                 *(_DWORD *)(*(_QWORD *)(v21[0] + 976LL) + 184LL),
                 *(_DWORD *)(*(_QWORD *)(v21[0] + 976LL) + 176LL),
                 *(_DWORD *)(*(_QWORD *)(v21[0] + 976LL) + 188LL),
                 *(_DWORD *)(*(_QWORD *)(v21[0] + 976LL) + 180LL));
        }
      }
      else
      {
        v8 = 0;
        EngSetLastError(6u);
      }
      APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v21);
    }
    else
    {
      v8 = 0;
    }
  }
  if ( v9 )
  {
    v18 = UserReferenceDwmApiPort(a1);
    DwmSyncFlushAndWaitForBatch(v18);
  }
  return v8;
}
