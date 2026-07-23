/*
 * XREFs of ExpExTimerAttributesAreValid @ 0x14044E6FC
 * Callers:
 *     ExAllocateTimerInternal2 @ 0x14044E590 (ExAllocateTimerInternal2.c)
 *     NtCreateTimer2 @ 0x140ABF460 (NtCreateTimer2.c)
 * Callees:
 *     <none>
 */

char __fastcall ExpExTimerAttributesAreValid(int a1)
{
  char v1; // r8
  int v2; // ecx
  unsigned int i; // edx

  v1 = 0;
  if ( (a1 & 0x8000000E) == a1 )
  {
    v2 = a1 & 0xE;
    for ( i = 0; i < 6; ++i )
    {
      if ( v2 == *((_DWORD *)qword_14003A9E8 + i) )
        return 1;
    }
  }
  return v1;
}
