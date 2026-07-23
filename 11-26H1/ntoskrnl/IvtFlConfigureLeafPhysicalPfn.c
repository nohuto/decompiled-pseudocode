/*
 * XREFs of IvtFlConfigureLeafPhysicalPfn @ 0x1405ADCB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IvtFlConfigureLeafPhysicalPfn(__int64 *a1, __int64 a2, char a3, unsigned int a4)
{
  int v5; // ebx
  __int64 *v6; // r10
  unsigned int v8; // r9d
  __int64 v9; // r11
  __int64 v10; // rcx
  unsigned __int64 v11; // r8

  v5 = a3 & 2;
  v6 = a1;
  if ( (a3 & 1) == 0 )
    return 0LL;
  v8 = 0;
  if ( a4 )
  {
    v9 = a2 - (_QWORD)a1;
    do
    {
      v10 = *v6;
      if ( *v6 )
        break;
      if ( !HalpDeviceBlockUnblockPushLock.ApcState.InProgressFlags )
        v10 = 96LL;
      ++v8;
      v11 = v10 & 0xFFFFFFFFFFFFFFFDuLL | (v5 != 0 ? 6LL : 4LL) | 0x8000000000000000uLL;
      *v6 = v11;
      *v6 = (*(__int64 *)((char *)v6 + v9) << 12) ^ (v11 ^ (*(__int64 *)((char *)v6 + v9) << 12)) & 0xFFF0000000000FFFuLL | 1;
      ++v6;
    }
    while ( v8 < a4 );
  }
  return v8;
}
