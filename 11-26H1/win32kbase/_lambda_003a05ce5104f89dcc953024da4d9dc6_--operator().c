/*
 * XREFs of _lambda_003a05ce5104f89dcc953024da4d9dc6_::operator() @ 0x140191374
 * Callers:
 *     CleanupKeyboardLayouts @ 0x1401B57F0 (CleanupKeyboardLayouts.c)
 * Callees:
 *     HMMarkObjectDestroy @ 0x140048740 (HMMarkObjectDestroy.c)
 *     _HMPheFromObject @ 0x1400488F0 (_HMPheFromObject.c)
 *     HMUnlockObject @ 0x14009B9C0 (HMUnlockObject.c)
 *     DestroyKL @ 0x140118548 (DestroyKL.c)
 */

__int64 __fastcall lambda_003a05ce5104f89dcc953024da4d9dc6_::operator()(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rdi
  __int64 v5; // rbx
  int v6; // edx
  int v7; // ecx
  int v8; // r8d
  __int64 UserSessionState; // rax
  int v10; // edx
  int v11; // r8d
  __int64 result; // rax
  int v13; // edx
  int v14; // r8d

  v3 = *(_QWORD *)(a2 + 16);
  if ( *(_QWORD *)(v3 + 16) != v3 )
  {
    do
    {
      v5 = *(_QWORD *)(v3 + 16);
      DestroyKL((struct _HEAD *)v3, a2, a3);
      v3 = v5;
    }
    while ( *(_QWORD *)(v5 + 16) != v5 );
  }
  if ( (*(_BYTE *)(HMPheFromObject((_DWORD *)a2, a2, a3) + 25) & 1) == 0 )
    HMMarkObjectDestroy((struct _HEAD *)a2, v6, v8);
  UserSessionState = W32GetUserSessionState(v7, v6, v8);
  *(_DWORD *)(UserSessionState + 68928) |= 0x8000u;
  result = HMUnlockObject(a2, v10, v11);
  if ( result )
    return DestroyKL((struct _HEAD *)v3, v13, v14);
  return result;
}
