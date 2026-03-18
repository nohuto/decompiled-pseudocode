/*
 * XREFs of ?PopulateDispatcherObjectWithCustomInputEvents@CBaseInput@@QEAAJAEAVCEventBitmap@@PEAVIRegisterInputDispatcherObjects@@@Z @ 0x1402107C0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetDispatcherObjectByIndex@CRIMBase@@IEBAPEAXI@Z @ 0x14020F7D8 (-GetDispatcherObjectByIndex@CRIMBase@@IEBAPEAXI@Z.c)
 *     ?IsDispatcherObjectValid@CRIMBase@@IEBA_NI@Z @ 0x140210150 (-IsDispatcherObjectValid@CRIMBase@@IEBA_NI@Z.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 *     memset @ 0x140243000 (memset.c)
 */

__int64 __fastcall CBaseInput::PopulateDispatcherObjectWithCustomInputEvents(
        CBaseInput *this,
        struct CEventBitmap *a2,
        struct IRegisterInputDispatcherObjects *a3)
{
  __int64 v6; // rdi
  unsigned int v7; // edx
  _QWORD v9[20]; // [rsp+20h] [rbp-C8h] BYREF

  memset(v9, 0, 0x98uLL);
  v6 = 0LL;
  *(_DWORD *)a2 = 0;
  v7 = 0;
  while ( *((_DWORD *)a2 + 1) && (unsigned int)v6 < 0x13 )
  {
    if ( (*((_BYTE *)a2 + 4) & 1) != 0 && CRIMBase::IsDispatcherObjectValid(this, v7) )
    {
      v9[v6] = CRIMBase::GetDispatcherObjectByIndex(this, *(_DWORD *)a2);
      v6 = (unsigned int)(v6 + 1);
    }
    ++*(_DWORD *)a2;
    *((_DWORD *)a2 + 1) >>= 1;
    v7 = *(_DWORD *)a2;
  }
  return (*(__int64 (__fastcall **)(struct IRegisterInputDispatcherObjects *, _QWORD, _QWORD *))(*(_QWORD *)a3 + 8LL))(
           a3,
           (unsigned int)v6,
           v9);
}
