/*
 * XREFs of ?ProcessToken@CLegacySurfaceManager@@IEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAIPEA_N@Z @ 0x18002FF00
 * Callers:
 *     ?ProcessLegacyTokens@CGlobalSurfaceManager@@AEAAJXZ @ 0x18002F240 (-ProcessLegacyTokens@CGlobalSurfaceManager@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     McTemplateU0xxq_EventWriteTransfer @ 0x1800A7614 (McTemplateU0xxq_EventWriteTransfer.c)
 *     ?SetHRGN@CRegion@@QEAAXQEAUHRGN__@@@Z @ 0x1800E9CB0 (-SetHRGN@CRegion@@QEAAXQEAUHRGN__@@@Z.c)
 *     ?TryAddRectangles@CRegion@@QEAAJPEBUtagRECT@@I@Z @ 0x1800EAB10 (-TryAddRectangles@CRegion@@QEAAJPEBUtagRECT@@I@Z.c)
 *     ?GetDirtyRegion@CRedirectedGDISurface@@QEAAJ_KPEAPEAUHRGN__@@@Z @ 0x18012C8A4 (-GetDirtyRegion@CRedirectedGDISurface@@QEAAJ_KPEAPEAUHRGN__@@@Z.c)
 *     ?AddDirtyRegion@CGdiSpriteBitmap@@AEAAXAEAVCRegion@@_N@Z @ 0x18012DBA4 (-AddDirtyRegion@CGdiSpriteBitmap@@AEAAXAEAVCRegion@@_N@Z.c)
 *     ?AddIntervalOneDxBltEventId@CLegacySurfaceManager@@QEAAJ_K@Z @ 0x18019E404 (-AddIntervalOneDxBltEventId@CLegacySurfaceManager@@QEAAJ_K@Z.c)
 *     McTemplateU0xxxqNR3_EventWriteTransfer @ 0x1801B77BC (McTemplateU0xxxqNR3_EventWriteTransfer.c)
 *     McTemplateU0xxqNR2_EventWriteTransfer @ 0x1801B7B18 (McTemplateU0xxqNR2_EventWriteTransfer.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1802014C4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CLegacySurfaceManager::ProcessToken(
        CLegacySurfaceManager *this,
        const struct _D3DKMT_PRESENTHISTORYTOKEN *a2,
        unsigned int *a3,
        bool *a4)
{
  unsigned int v4; // ebp
  int v6; // ecx
  const struct _D3DKMT_PRESENTHISTORYTOKEN *v8; // rsi
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  _QWORD *v12; // rax
  _QWORD *v13; // rbx
  int v14; // eax
  __int64 v15; // rax
  int v16; // r9d
  int v17; // eax
  int v18; // r8d
  int v19; // edx
  int v20; // eax
  int v21; // eax
  unsigned __int64 v22; // rdx
  void *v23; // rdi
  _QWORD *v25; // rcx
  HANDLE ProcessHeap; // rax
  PVOID v27; // rax
  CGdiSpriteBitmap *v28; // rbx
  int v29; // eax
  _QWORD *v30; // rax
  CGdiSpriteBitmap *v31; // rbx
  unsigned __int64 v32; // rdx
  CRedirectedGDISurface *v33; // rcx
  int v34; // eax
  int v35; // [rsp+20h] [rbp-D8h]
  HGDIOBJ ho; // [rsp+40h] [rbp-B8h] BYREF
  __int64 Buffer; // [rsp+48h] [rbp-B0h] BYREF
  __int128 v38; // [rsp+50h] [rbp-A8h]
  LPVOID lpMem; // [rsp+60h] [rbp-98h] BYREF
  _DWORD v40[18]; // [rsp+68h] [rbp-90h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+0h]

  v4 = 0;
  lpMem = v40;
  *a4 = 0;
  v6 = *(_DWORD *)a2;
  v40[0] = 0;
  v8 = a2;
  if ( v6 == 5 )
  {
    v25 = (_QWORD *)*((_QWORD *)this + 26);
    LOBYTE(a2) = 0;
    if ( v25 && v25[7] == *((_QWORD *)v8 + 2) && *((_BYTE *)this + 220) )
    {
      (*(void (__fastcall **)(_QWORD *, const struct _D3DKMT_PRESENTHISTORYTOKEN *, unsigned int *))(*v25 + 40LL))(
        v25,
        a2,
        a3);
      LOBYTE(a2) = 1;
      *((_BYTE *)this + 220) = 0;
    }
    *a4 = (char)a2;
    goto LABEL_24;
  }
  v9 = v6 - 1;
  if ( v9 )
  {
    v10 = v9 - 1;
    if ( !v10 )
      goto LABEL_47;
    v11 = v10 - 1;
    if ( !v11 )
    {
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
        McTemplateU0xxxqNR3_EventWriteTransfer(
          0,
          (_DWORD)a2,
          *((_QWORD *)a2 + 2),
          *((_QWORD *)a2 + 3),
          *((_QWORD *)a2 + 4),
          *((_DWORD *)a2 + 10));
      v12 = (_QWORD *)*((_QWORD *)this + 11);
      while ( v12 != (_QWORD *)((char *)this + 80) )
      {
        v13 = v12 - 20;
        v12 = (_QWORD *)v12[1];
        if ( v13[52] == *((_QWORD *)v8 + 3) )
        {
          if ( v13 )
          {
            v14 = CRegion::TryAddRectangles(
                    (CRegion *)&lpMem,
                    (const struct tagRECT *)((char *)v8 + 44),
                    *((_DWORD *)v8 + 10));
            if ( v14 < 0 )
              wil::details::in1diag3::FailFast_Hr(
                retaddr,
                (void *)0x1D1,
                (unsigned int)"onecoreuap\\windows\\DWM\\common\\shared\\Region.h",
                (const char *)(unsigned int)v14,
                v35);
            v15 = *(int *)lpMem;
            if ( (_DWORD)v15 )
            {
              v16 = *((_DWORD *)lpMem + 2 * v15 + 1);
              v17 = -1;
              v18 = *((_DWORD *)lpMem + 2);
              v19 = *((_DWORD *)lpMem + 3);
              if ( *((int *)lpMem + 1) >= 0 )
                v17 = *((_DWORD *)lpMem + 1);
              *((_DWORD *)v13 + 86) = v17;
              v20 = -1;
              if ( v19 >= 0 )
                v20 = v19;
              *((_DWORD *)v13 + 87) = v20;
              v21 = -1;
              if ( v18 >= 0 )
                v21 = v18;
              *((_DWORD *)v13 + 88) = v21;
              if ( v16 < 0 )
                v16 = -1;
              *((_DWORD *)v13 + 89) = v16;
              CGdiSpriteBitmap::AddDirtyRegion((CGdiSpriteBitmap *)v13, (struct CRegion *)&lpMem, 1);
            }
          }
          break;
        }
      }
      v22 = *((_QWORD *)v8 + 4);
      if ( v22 )
      {
        v34 = CLegacySurfaceManager::AddIntervalOneDxBltEventId(this, v22);
        v4 = v34;
        if ( v34 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v34, 0xB7u, 0LL);
          goto LABEL_24;
        }
      }
      goto LABEL_23;
    }
    if ( v11 != 3 )
    {
LABEL_47:
      *a4 = 1;
      return v4;
    }
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      McTemplateU0xxq_EventWriteTransfer(
        3,
        (unsigned int)"X",
        *((_QWORD *)a2 + 2),
        *((_QWORD *)a2 + 4),
        *((_DWORD *)a2 + 6));
    Buffer = *((_QWORD *)v8 + 2);
    v38 = 0LL;
    v30 = RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 8), &Buffer);
    if ( v30 )
    {
      v31 = (CGdiSpriteBitmap *)v30[2];
      if ( v31 )
      {
        v32 = *((_QWORD *)v8 + 4);
        v33 = (CRedirectedGDISurface *)*((_QWORD *)v31 + 16);
        ho = 0LL;
        if ( (int)CRedirectedGDISurface::GetDirtyRegion(v33, v32, (HRGN *)&ho) >= 0 )
        {
          if ( ho )
          {
            CRegion::SetHRGN((CRegion *)&lpMem, (HRGN)ho);
            CGdiSpriteBitmap::AddDirtyRegion(v31, (struct CRegion *)&lpMem, 1);
            DeleteObject(ho);
            *a4 = 1;
            goto LABEL_24;
          }
        }
      }
    }
  }
  else
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      McTemplateU0xxqNR2_EventWriteTransfer(
        0,
        (_DWORD)a2,
        *((_QWORD *)a2 + 2),
        *((_QWORD *)a2 + 3),
        *((_DWORD *)a2 + 14));
    Buffer = *((_QWORD *)v8 + 2);
    v38 = 0LL;
    v27 = RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 8), &Buffer);
    if ( v27 )
    {
      v28 = (CGdiSpriteBitmap *)*((_QWORD *)v27 + 2);
      if ( v28 )
      {
        v29 = CRegion::TryAddRectangles(
                (CRegion *)&lpMem,
                (const struct tagRECT *)((char *)v8 + 60),
                *((_DWORD *)v8 + 14));
        if ( v29 < 0 )
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x1D1,
            (unsigned int)"onecoreuap\\windows\\DWM\\common\\shared\\Region.h",
            (const char *)(unsigned int)v29,
            v35);
        CGdiSpriteBitmap::AddDirtyRegion(v28, (struct CRegion *)&lpMem, 1);
      }
    }
  }
LABEL_23:
  *a4 = 1;
LABEL_24:
  v23 = lpMem;
  if ( v40 != lpMem && lpMem )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v23);
  }
  return v4;
}
