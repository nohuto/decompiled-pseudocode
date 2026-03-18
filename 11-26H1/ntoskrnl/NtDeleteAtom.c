/*
 * XREFs of NtDeleteAtom @ 0x140A40A80
 * Callers:
 *     <none>
 * Callees:
 *     PsInvokeWin32Callout @ 0x140A41140 (PsInvokeWin32Callout.c)
 *     RtlDeleteAtomFromAtomTable @ 0x140A412F0 (RtlDeleteAtomFromAtomTable.c)
 */

__int64 __fastcall NtDeleteAtom(unsigned __int16 a1)
{
  __int128 v3; // [rsp+20h] [rbp-28h] BYREF
  __int64 v4; // [rsp+30h] [rbp-18h]

  v4 = 0LL;
  v3 = 0LL;
  PsInvokeWin32Callout(2LL, &v3, 0LL, 0LL);
  if ( v4 )
    return RtlDeleteAtomFromAtomTable(v4, a1);
  else
    return 3221225506LL;
}
