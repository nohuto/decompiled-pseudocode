/*
 * XREFs of ?RetrievePreviouslyPersistedState@CLeakTrackingAllocator@NSInstrumentation@@CAXPEAW4TrackingMode@LeakTrackingAllocatorCore@2@PEAW4PoolLeakState@12@PEAII2@Z @ 0x1401D3EF0
 * Callers:
 *     ?Create@CLeakTrackingAllocator@NSInstrumentation@@SAPEAV12@PEAX_N@Z @ 0x14015BAE4 (-Create@CLeakTrackingAllocator@NSInstrumentation@@SAPEAV12@PEAX_N@Z.c)
 * Callees:
 *     ?PlatformRetrieveConfig32@NSInstrumentation@@YAXPEBGQEBQEBGPEAIPEA_N_K@Z @ 0x140141CBC (-PlatformRetrieveConfig32@NSInstrumentation@@YAXPEBGQEBQEBGPEAIPEA_N_K@Z.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 */

void __fastcall NSInstrumentation::CLeakTrackingAllocator::RetrievePreviouslyPersistedState(
        enum NSInstrumentation::LeakTrackingAllocatorCore::TrackingMode *a1,
        enum NSInstrumentation::CLeakTrackingAllocator::PoolLeakState *a2,
        char *a3,
        __int64 a4,
        unsigned int *a5)
{
  signed __int64 v8; // rcx
  unsigned __int64 i; // rax
  unsigned int v10; // edx
  unsigned __int16 v11[4]; // [rsp+30h] [rbp-61h] BYREF
  const wchar_t *v12; // [rsp+38h] [rbp-59h]
  const wchar_t *v13; // [rsp+40h] [rbp-51h]
  const wchar_t *v14; // [rsp+48h] [rbp-49h]
  const wchar_t *v15; // [rsp+50h] [rbp-41h]
  const wchar_t *v16; // [rsp+58h] [rbp-39h]
  const wchar_t *v17; // [rsp+60h] [rbp-31h]
  const wchar_t *v18; // [rsp+68h] [rbp-29h]
  const wchar_t *v19; // [rsp+70h] [rbp-21h]
  const wchar_t *v20; // [rsp+78h] [rbp-19h]
  unsigned __int16 *v21; // [rsp+80h] [rbp-11h] BYREF
  char v22; // [rsp+88h] [rbp-9h] BYREF
  unsigned int v23[4]; // [rsp+A8h] [rbp+17h] BYREF

  *(_QWORD *)v11 = L"LeakTrackingAllocatorMode";
  v12 = L"PoolLeakedState";
  v13 = L"LeakedPoolTag0";
  v14 = L"LeakedPoolTag1";
  v15 = L"LeakedPoolTag2";
  v16 = L"LeakedPoolTag3";
  v17 = L"LeakedPoolTag4";
  v18 = L"LeakedPoolTag5";
  v19 = L"LeakedPoolTag6";
  v20 = L"LeakedPoolTag7";
  NSInstrumentation::PlatformRetrieveConfig32(a1, (PCWSTR *)v11, (const unsigned __int16 **)&v21, v23);
  *(_DWORD *)a1 = (_DWORD)v21;
  *(_DWORD *)a2 = HIDWORD(v21);
  if ( *(_DWORD *)a1 && (unsigned int)(*(_DWORD *)a1 - 1) >= 2 )
    *(_DWORD *)a1 = 0;
  if ( *(_DWORD *)a2 >= 2u )
    *(_DWORD *)a2 = 0;
  *a5 = 0;
  v8 = &v22 - a3;
  for ( i = 0LL; i < 8; ++i )
  {
    if ( !*((_BYTE *)v23 + i + 2) )
      break;
    v10 = *(_DWORD *)&a3[v8];
    if ( !v10 )
      break;
    *(_DWORD *)a3 = v10;
    ++*a5;
    a3 += 4;
  }
}
