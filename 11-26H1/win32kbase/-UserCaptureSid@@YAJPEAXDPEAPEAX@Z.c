/*
 * XREFs of ?UserCaptureSid@@YAJPEAXDPEAPEAX@Z @ 0x14018D850
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x140047370 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     memmove @ 0x14024C2C0 (memmove.c)
 *     RtlReadUCharFromUser @ 0x1402D212C (RtlReadUCharFromUser.c)
 */

__int64 __fastcall UserCaptureSid(char *a1, char a2, void **a3)
{
  unsigned __int8 UCharFromUser; // si
  SIZE_T v5; // rdi
  void *v6; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9

  if ( a2 )
  {
    UCharFromUser = RtlReadUCharFromUser(a1 + 1);
    v5 = RtlLengthRequiredSid(UCharFromUser);
    ProbeForRead(a1, v5, 4u);
  }
  else
  {
    UCharFromUser = a1[1];
    v5 = RtlLengthRequiredSid(UCharFromUser);
  }
  v6 = (void *)Win32AllocPoolZInitImpl(256LL, v5, 0x65737355u);
  *a3 = v6;
  if ( !v6 )
    return 3221225626LL;
  memmove(v6, a1, v5);
  *((_BYTE *)*a3 + 1) = UCharFromUser;
  if ( RtlValidSid(*a3) )
    return 0LL;
  GreDeleteFastMutex((char *)*a3, v8, v9, v10);
  *a3 = 0LL;
  return 3221225592LL;
}
