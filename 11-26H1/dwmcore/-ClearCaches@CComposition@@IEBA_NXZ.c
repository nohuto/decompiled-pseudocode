/*
 * XREFs of ?ClearCaches@CComposition@@IEBA_NXZ @ 0x180175E00
 * Callers:
 *     ?PreRender@CComposition@@IEAAJPEA_N@Z @ 0x18002D828 (-PreRender@CComposition@@IEAAJPEA_N@Z.c)
 * Callees:
 *     McGenEventWrite_EventWriteTransfer @ 0x18002F930 (McGenEventWrite_EventWriteTransfer.c)
 *     ?ClearProtectedResources@CD3DDevice@@QEAA_NXZ @ 0x18020A574 (-ClearProtectedResources@CD3DDevice@@QEAA_NXZ.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CComposition::ClearCaches(CComposition *this, __int64 a2, __int64 a3)
{
  unsigned __int8 v3; // bp
  __int64 v4; // rcx
  __int64 v5; // rax
  int v6; // edx
  unsigned int v7; // ecx
  unsigned int v8; // r14d
  __int64 v9; // rdi
  __int64 i; // r15
  char v11; // si
  __int64 v12; // rbx
  __int64 j; // rcx
  __int64 v14; // rdx
  CD3DDevice *v15; // rcx
  __int64 v16; // r8
  __int64 v18; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v19; // [rsp+38h] [rbp-40h] BYREF
  __int64 *v20; // [rsp+48h] [rbp-30h]
  __int64 v21; // [rsp+50h] [rbp-28h]

  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 1) != 0 )
  {
    LODWORD(v18) = 2000;
    v20 = &v18;
    v21 = 4LL;
    McGenEventWrite_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_SCHEDULE_CLEAR_D2D_CACHES_Start,
      a3,
      2u,
      &v19);
  }
  v3 = 1;
  v4 = *((_QWORD *)g_pComposition + 77);
  v5 = *(_QWORD *)(v4 + 712);
  v6 = *(_DWORD *)(v4 + 720);
  if ( !(_DWORD)v5 || !HIDWORD(v5) )
  {
    v18 = 0x43800000780LL;
    v6 = 4;
    v5 = 0x43800000780LL;
  }
  v7 = v6 * ((v5 + 255) & 0xFFFFFF00) * ((HIDWORD(v5) + 255) & 0xFFFFFF00);
  v8 = v7 + (v7 >> 2);
  EnterCriticalSection(&CriticalSection);
  v9 = qword_1803DE688;
  for ( i = xmmword_1803DE690; v9 != i; v9 += 16LL )
  {
    v11 = 0;
    v12 = *(_QWORD *)(*(_QWORD *)v9 + 944LL);
    v18 = v12;
    EnterCriticalSection(&CriticalSection);
    for ( j = qword_1803DE688; j != (_QWORD)xmmword_1803DE690; j += 16LL )
    {
      v14 = *(_QWORD *)j;
      if ( __PAIR64__(HIDWORD(v18), v12) == *(_QWORD *)(*(_QWORD *)j + 944LL) )
      {
        if ( !byte_1803DE6A0 && !*(_BYTE *)(v14 + 444) && *(_DWORD *)(v14 + 440) )
          v11 = 1;
        break;
      }
    }
    LeaveCriticalSection(&CriticalSection);
    if ( *(_BYTE *)(v9 + 8) && !v11 )
      CD3DDevice::ClearProtectedResources(*(CD3DDevice **)v9);
    v15 = *(CD3DDevice **)v9;
    LODWORD(v18) = 1;
    if ( *((_QWORD *)v15 + 25) )
    {
      (*(void (__fastcall **)(_QWORD, __int64, _QWORD, __int64 *))(**((_QWORD **)v15 + 26) + 40LL))(
        *((_QWORD *)v15 + 26),
        2000LL,
        v8,
        &v18);
      if ( (_DWORD)v18 != 1 )
        v3 = 0;
    }
    *(_BYTE *)(v9 + 8) = v11;
  }
  LeaveCriticalSection(&CriticalSection);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 1) != 0 )
  {
    v21 = 4LL;
    v20 = &v18;
    LODWORD(v18) = v3 != 0;
    McGenEventWrite_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_SCHEDULE_CLEAR_D2D_CACHES_Stop,
      v16,
      2u,
      &v19);
  }
  return v3;
}
