/*
 * XREFs of PopPepClearDripsDeviceVetoMask @ 0x140614284
 * Callers:
 *     PopFxClearDeviceConstraints @ 0x1404DB710 (PopFxClearDeviceConstraints.c)
 * Callees:
 *     PopPepUpdateIdleStateRefCount @ 0x1403BBF88 (PopPepUpdateIdleStateRefCount.c)
 */

__int64 __fastcall PopPepClearDripsDeviceVetoMask(int *a1)
{
  unsigned int v2; // edi
  _DWORD *v3; // rax
  __int64 v4; // rcx
  unsigned int i; // esi
  __int64 v6; // rbp
  unsigned int j; // edx
  __int64 v8; // rax

  v2 = -1073741823;
  if ( a1[43] == 2 )
  {
    PopPepUpdateIdleStateRefCount(a1[36], 0, 0, (__int64)a1, 0xFFFFFFFF);
    v3 = a1 + 39;
    v4 = 3LL;
    v2 = 0;
    do
    {
      *(v3 - 3) = 0;
      *v3++ = 0;
      --v4;
    }
    while ( v4 );
    for ( i = 0; i < a1[45]; ++i )
    {
      v6 = 52LL * i;
      PopPepUpdateIdleStateRefCount(*(_DWORD *)(*(_QWORD *)&a1[v6 + 98] + 16LL), 0, 0, (__int64)a1, i);
      for ( j = 0; j < a1[v6 + 95]; *(_DWORD *)(*(_QWORD *)&a1[v6 + 98] + 24 * v8 + 16) = 0 )
        v8 = j++;
    }
  }
  return v2;
}
