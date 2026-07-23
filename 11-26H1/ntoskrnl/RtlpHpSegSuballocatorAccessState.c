/*
 * XREFs of RtlpHpSegSuballocatorAccessState @ 0x14063C580
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall RtlpHpSegSuballocatorAccessState(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4, int a5)
{
  __int64 v7; // rax
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rdx
  unsigned int v10; // r8d
  __int64 v11; // rcx
  _BYTE *v12; // r9
  __int64 v13; // rcx

  v7 = *(_QWORD *)&PspTlsContext.Timer.Processor ^ *(_QWORD *)((*(_QWORD *)a1 & a2) + 0x10) ^ *(_QWORD *)a1 & a2;
  if ( v7 != a1
    || (v8 = (*(_QWORD *)a1 & a2)
           + 32 * ((unsigned __int64)((unsigned int)a2 - (*(_DWORD *)a1 & (unsigned int)a2)) >> *(_BYTE *)(a1 + 8)),
        v9 = v8 - 32LL * *(unsigned __int8 *)(v8 + 26),
        LOBYTE(v7) = *(_BYTE *)(v9 + 24) & 3,
        (_BYTE)v7 != 3) )
  {
    v9 = 0LL;
  }
  v10 = 0;
  if ( a4 )
  {
    v11 = 0LL;
    do
    {
      v12 = (_BYTE *)(v11 + a3);
      v13 = 32 * v11;
      if ( a5 )
      {
        LOBYTE(v7) = *(_BYTE *)(v13 + v9 + 27);
        *v12 = v7;
      }
      else
      {
        LOBYTE(v7) = *v12;
        *(_BYTE *)(v13 + v9 + 27) = *v12;
      }
      v11 = ++v10;
    }
    while ( v10 < a4 );
  }
  return v7;
}
