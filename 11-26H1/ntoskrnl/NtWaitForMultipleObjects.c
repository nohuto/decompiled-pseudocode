/*
 * XREFs of NtWaitForMultipleObjects @ 0x140A22F80
 * Callers:
 *     DifNtWaitForMultipleObjectsWrapper @ 0x1406914B0 (DifNtWaitForMultipleObjectsWrapper.c)
 * Callees:
 *     RtlCopyFromUser @ 0x140533E38 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memmove @ 0x14073D480 (memmove.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     RtlReadULong64FromUser @ 0x14077F554 (RtlReadULong64FromUser.c)
 *     ObWaitForMultipleObjects @ 0x140A230B0 (ObWaitForMultipleObjects.c)
 */

__int64 __fastcall NtWaitForMultipleObjects(ULONG Count, void *Src, unsigned int a3, BOOLEAN a4, _QWORD *a5)
{
  __int64 v8; // rbx
  _QWORD *v9; // rdi
  KPROCESSOR_MODE PreviousMode; // si
  _QWORD v12[3]; // [rsp+48h] [rbp-250h] BYREF
  _BYTE v13[512]; // [rsp+60h] [rbp-238h] BYREF

  v8 = Count;
  v9 = a5;
  memset_0(v13, 0, sizeof(v13));
  v12[0] = 0LL;
  if ( (unsigned int)(v8 - 1) > 0x3F )
    return 3221225711LL;
  if ( a3 > 1 )
    return 3221225713LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    if ( a5 )
    {
      v12[0] = RtlReadULong64FromUser(a5);
      v9 = v12;
      v12[1] = v12;
    }
    RtlCopyFromUser(v13, Src, 8 * v8);
  }
  else
  {
    memmove(v13, Src, 8 * v8);
  }
  return ObWaitForMultipleObjects(v8, PreviousMode, a4, (__int64)v9);
}
