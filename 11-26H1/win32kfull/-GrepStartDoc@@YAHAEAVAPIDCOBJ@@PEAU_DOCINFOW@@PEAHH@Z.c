/*
 * XREFs of ?GrepStartDoc@@YAHAEAVAPIDCOBJ@@PEAU_DOCINFOW@@PEAHH@Z @ 0x140310CA8
 * Callers:
 *     NtGdiStartDoc @ 0x14027D880 (NtGdiStartDoc.c)
 * Callees:
 *     ?pSurface@DC@@QEAAXPEAVSURFACE@@@Z @ 0x1400150C0 (-pSurface@DC@@QEAAXPEAVSURFACE@@@Z.c)
 *     ?GrepExtEscape@@YAHAEAVXDCOBJ@@HHPEADH1@Z @ 0x14016D63C (-GrepExtEscape@@YAHAEAVXDCOBJ@@HHPEADH1@Z.c)
 *     ?vDone@RESTORESAVEDCATTRS@@QEAAXXZ @ 0x1402965CC (-vDone@RESTORESAVEDCATTRS@@QEAAXXZ.c)
 *     ?vInit@RESTORESAVEDCATTRS@@QEAAXPEAVAPIDCOBJ@@@Z @ 0x140296918 (-vInit@RESTORESAVEDCATTRS@@QEAAXPEAVAPIDCOBJ@@@Z.c)
 *     ??1RESTORESAVEDCATTRS@@QEAA@XZ @ 0x140296EA8 (--1RESTORESAVEDCATTRS@@QEAA@XZ.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall GrepStartDoc(DC **this, struct _DOCINFOW *a2, int *a3, unsigned int a4)
{
  unsigned int v5; // ebx
  DC *v6; // rcx
  int v10; // eax
  __int64 v11; // rax
  int v12; // edx
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 (__fastcall *v17)(__int64, LPCWSTR, _QWORD); // rsi
  int v18; // esi
  __int64 v19; // [rsp+30h] [rbp-10h] BYREF
  DCOBJ *v20; // [rsp+38h] [rbp-8h] BYREF
  int v21; // [rsp+70h] [rbp+30h] BYREF

  v5 = 0;
  v6 = *this;
  v10 = *(_DWORD *)v6 & 0x7F0000;
  if ( v10 != 0x10000 && v10 != 6684672 )
  {
    v11 = *((_QWORD *)v6 + 6);
    v19 = v11;
    v12 = *(_DWORD *)(v11 + 40);
    if ( (v12 & 1) == 0 && *(_QWORD *)(v11 + 2552) && !*((_DWORD *)v6 + 8) && !*((_QWORD *)v6 + 62) )
    {
      if ( (v12 & 0x8000) == 0 )
        return 0xFFFFFFFFLL;
      if ( PDEVOBJ::bMakeSurface((PDEVOBJ *)&v19, 0LL) )
      {
        v15 = v19;
        *a3 = *(_DWORD *)(*(_QWORD *)(v19 + 2544) + 112LL) & 0x2000000;
        DC::pSurface(*this, *(struct SURFACE **)(v15 + 2544), v14);
        if ( *a3 )
          *((_QWORD *)*this + 64) = *(_QWORD *)(*(_QWORD *)(v19 + 2544) + 56LL);
        DC::bSetDefaultRegion(*this);
        v16 = v19;
        v20 = 0LL;
        v17 = *(__int64 (__fastcall **)(__int64, LPCWSTR, _QWORD))(v19 + 2960);
        if ( (*(_DWORD *)(v19 + 40) & 0x8000) != 0 )
        {
          RESTORESAVEDCATTRS::vInit((RESTORESAVEDCATTRS *)&v20, (struct APIDCOBJ *)this);
          v16 = v19;
        }
        if ( v17 )
          v18 = v17((*(_QWORD *)(v16 + 2544) + 24LL) & -(__int64)(*(_QWORD *)(v16 + 2544) != 0LL), a2->lpszDocName, a4);
        else
          v18 = 0;
        RESTORESAVEDCATTRS::vDone(&v20);
        if ( *((_DWORD *)*this + 528) != -1 )
        {
          v21 = *((_DWORD *)*this + 528);
          GrepExtEscape((struct XDCOBJ *)this, 0x11u, 4u, (char *)&v21, 0, 0LL);
          *((_DWORD *)*this + 528) = -1;
        }
        if ( (*((_DWORD *)*this + 9) & 0x400) != 0 )
        {
          LOWORD(v21) = 1;
          GrepExtEscape((struct XDCOBJ *)this, 0x21u, 2u, (char *)&v21, 0, 0LL);
          *((_DWORD *)*this + 9) &= ~0x400u;
        }
        if ( v18 )
        {
          v5 = a4;
          *((_DWORD *)*this + 27) = *((_DWORD *)*this + 26);
        }
        RESTORESAVEDCATTRS::~RESTORESAVEDCATTRS(&v20);
      }
    }
  }
  return v5;
}
