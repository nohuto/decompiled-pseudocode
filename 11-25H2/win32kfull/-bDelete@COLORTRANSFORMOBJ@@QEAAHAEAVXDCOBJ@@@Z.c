/*
 * XREFs of ?bDelete@COLORTRANSFORMOBJ@@QEAAHAEAVXDCOBJ@@@Z @ 0x14033191C
 * Callers:
 *     XDCOBJ_vCleanupColorTransformWrap @ 0x1401781C0 (XDCOBJ_vCleanupColorTransformWrap.c)
 *     ?hCreate@COLORTRANSFORMOBJ@@QEAAPEAXAEAVXDCOBJ@@PEAUtagLOGCOLORSPACEW@@PEAXK2K2K@Z @ 0x140331AC4 (-hCreate@COLORTRANSFORMOBJ@@QEAAPEAXAEAVXDCOBJ@@PEAUtagLOGCOLORSPACEW@@PEAXK2K2K@Z.c)
 *     NtGdiDeleteColorTransform @ 0x14033E1F0 (NtGdiDeleteColorTransform.c)
 * Callees:
 *     ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x14007E404 (--0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x14008A870 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?bAllowDDICall@PDEVOBJ@@QEBAHXZ @ 0x1401CE438 (-bAllowDDICall@PDEVOBJ@@QEBAHXZ.c)
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

__int64 __fastcall COLORTRANSFORMOBJ::bDelete(COLORTRANSFORMOBJ *this, struct XDCOBJ *a2)
{
  _QWORD *v2; // rax
  unsigned int v3; // edi
  __int64 v6; // r15
  __int64 v7; // rbp
  __int64 v8; // rbx
  unsigned int (__fastcall *v9)(_QWORD, __int64); // rax
  _QWORD *v10; // rdx
  _QWORD *v11; // rcx
  _QWORD *v12; // rax
  _QWORD *v13; // rax
  char v15; // [rsp+20h] [rbp-B8h]
  _BYTE v16[144]; // [rsp+30h] [rbp-A8h] BYREF
  __int64 v17; // [rsp+E0h] [rbp+8h] BYREF

  v2 = (_QWORD *)*((_QWORD *)this + 4);
  v3 = 0;
  if ( v2 )
  {
    v6 = *v2;
    v15 = 14;
    if ( (unsigned int)HmgRemoveObject(*v2, 0LL, 1LL, 1LL, v15, 0LL) )
    {
      v7 = *(_QWORD *)(*((_QWORD *)this + 4) + 24LL);
      if ( v7 )
      {
        v8 = *(_QWORD *)(*(_QWORD *)a2 + 48LL);
        v17 = v8;
        if ( v8 )
        {
          if ( (*(_DWORD *)(v8 + 40) & 0x8000) == 0 || (unsigned int)PDEVOBJ::bAllowDDICall((PDEVOBJ *)&v17) )
          {
            DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v16, (struct PDEVOBJ *)&v17);
            v9 = *(unsigned int (__fastcall **)(_QWORD, __int64))(v8 + 3200);
            if ( v9 )
            {
              if ( v9(*(_QWORD *)(v8 + 1784), v7) || (*(_DWORD *)(v8 + 40) & 0x8000) != 0 )
                *(_QWORD *)(*((_QWORD *)this + 4) + 24LL) = 0LL;
            }
            else
            {
              EngSetLastError(0x57u);
            }
            DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v16);
          }
          else
          {
            *(_QWORD *)(*((_QWORD *)this + 4) + 24LL) = 0LL;
          }
        }
      }
      if ( !*(_QWORD *)(*((_QWORD *)this + 4) + 24LL) )
      {
        v10 = *(_QWORD **)(*(_QWORD *)a2 + 2080LL);
        if ( v10 )
        {
          v11 = *(_QWORD **)(*(_QWORD *)a2 + 2080LL);
          while ( v10 )
          {
            v12 = v10 + 1;
            if ( *v10 == v6 )
            {
              v13 = (_QWORD *)*v12;
              if ( v11 == v10 )
                *(_QWORD *)(*(_QWORD *)a2 + 2080LL) = v13;
              else
                v11[1] = v13;
              Win32FreePool(v10);
              break;
            }
            v11 = v10;
            v10 = (_QWORD *)*v12;
          }
        }
        FreeObject(*((_QWORD *)this + 4), 14LL);
        *((_QWORD *)this + 4) = 0LL;
      }
    }
    return 1;
  }
  return v3;
}
