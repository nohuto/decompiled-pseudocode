/*
 * XREFs of ?GrepStartDoc@@YAHAEAVXDCOBJ@@PEAU_DOCINFOW@@PEAHHW4EntryPoint@RFONTOBJ@@@Z @ 0x140327ABC
 * Callers:
 *     NtGdiStartDoc @ 0x140329180 (NtGdiStartDoc.c)
 * Callees:
 *     ?UmpdSecurityGateNoUmpdObj@@YA_NXZ @ 0x1400D3200 (-UmpdSecurityGateNoUmpdObj@@YA_NXZ.c)
 *     ?pSurface@DC@@QEAAXPEAVSURFACE@@@Z @ 0x140144234 (-pSurface@DC@@QEAAXPEAVSURFACE@@@Z.c)
 *     ?GrepExtEscape@@YAHAEAVXDCOBJ@@HHPEADH1AEBUTag@RFONTOBJ@@@Z @ 0x1401D371C (-GrepExtEscape@@YAHAEAVXDCOBJ@@HHPEADH1AEBUTag@RFONTOBJ@@@Z.c)
 *     ?vDone@RESTORESAVEDCATTRS@@QEAAXXZ @ 0x14026EA58 (-vDone@RESTORESAVEDCATTRS@@QEAAXXZ.c)
 *     ??1RESTORESAVEDCATTRS@@QEAA@XZ @ 0x14026F324 (--1RESTORESAVEDCATTRS@@QEAA@XZ.c)
 *     ?vInit@RESTORESAVEDCATTRS@@QEAAXPEAVXDCOBJ@@@Z @ 0x140270270 (-vInit@RESTORESAVEDCATTRS@@QEAAXPEAVXDCOBJ@@@Z.c)
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

__int64 __fastcall GrepStartDoc(DC **a1, __int64 a2, int *a3, unsigned int a4, int a5)
{
  unsigned int v6; // ebx
  DC *v7; // rcx
  int v11; // eax
  __int64 v12; // rax
  int v13; // edx
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 (__fastcall *v19)(__int64, _QWORD, _QWORD); // rsi
  int v20; // esi
  _DWORD v21[2]; // [rsp+40h] [rbp-10h] BYREF
  XDCOBJ *v22; // [rsp+48h] [rbp-8h] BYREF
  __int64 v23; // [rsp+80h] [rbp+30h] BYREF

  v6 = 0;
  v7 = *a1;
  v11 = *(_DWORD *)v7 & 0x7F0000;
  if ( v11 != 0x10000 && v11 != 6684672 )
  {
    v21[1] = *((unsigned __int16 *)v7 + 6);
    v12 = *((_QWORD *)v7 + 6);
    v23 = v12;
    v21[0] = 26;
    v13 = *(_DWORD *)(v12 + 40);
    if ( (v13 & 1) == 0 && *(_QWORD *)(v12 + 2552) && !*((_DWORD *)v7 + 8) && !*((_QWORD *)v7 + 62) )
    {
      if ( (v13 & 0x8000) == 0 )
        return 0xFFFFFFFFLL;
      if ( PDEVOBJ::bMakeSurface((PDEVOBJ *)&v23, 0LL) )
      {
        v15 = v23;
        *a3 = *(_DWORD *)(*(_QWORD *)(v23 + 2544) + 112LL) & 0x2000000;
        DC::pSurface(*a1, *(struct SURFACE **)(v15 + 2544));
        if ( *a3 )
          *((_QWORD *)*a1 + 64) = *(_QWORD *)(*(_QWORD *)(v23 + 2544) + 56LL);
        DC::bSetDefaultRegion(*a1);
        v22 = 0LL;
        v19 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(v23 + 2960);
        if ( (*(_DWORD *)(v23 + 40) & 0x8000) != 0 )
          RESTORESAVEDCATTRS::vInit((RESTORESAVEDCATTRS *)&v22, (struct XDCOBJ *)a1);
        if ( !UmpdSecurityGateNoUmpdObj(v17, v16, v18) || v19 )
          v20 = v19(
                  (*(_QWORD *)(v23 + 2544) + 24LL) & -(__int64)(*(_QWORD *)(v23 + 2544) != 0LL),
                  *(_QWORD *)(a2 + 8),
                  a4);
        else
          v20 = 0;
        RESTORESAVEDCATTRS::vDone(&v22);
        if ( *((_DWORD *)*a1 + 523) != -1 )
        {
          a5 = *((_DWORD *)*a1 + 523);
          GrepExtEscape((struct XDCOBJ *)a1, 0x11u, 4u, (char *)&a5, 0, 0LL, (const struct RFONTOBJ::Tag *)v21);
          *((_DWORD *)*a1 + 523) = -1;
        }
        if ( (*((_DWORD *)*a1 + 9) & 0x400) != 0 )
        {
          LOWORD(a5) = 1;
          GrepExtEscape((struct XDCOBJ *)a1, 0x21u, 2u, (char *)&a5, 0, 0LL, (const struct RFONTOBJ::Tag *)v21);
          *((_DWORD *)*a1 + 9) &= ~0x400u;
        }
        if ( v20 )
        {
          v6 = a4;
          *((_DWORD *)*a1 + 27) = *((_DWORD *)*a1 + 26);
        }
        RESTORESAVEDCATTRS::~RESTORESAVEDCATTRS(&v22);
      }
    }
  }
  return v6;
}
