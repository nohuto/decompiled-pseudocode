/*
 * XREFs of RtlpHpSegSetNotifyOnEmpty @ 0x14025021C
 * Callers:
 *     MmBuildMdlForNonPagedPool @ 0x14024DE40 (MmBuildMdlForNonPagedPool.c)
 *     MiUpdateNonPagedPoolNoSteal @ 0x14024FD1C (MiUpdateNonPagedPoolNoSteal.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpHpSegSetNotifyOnEmpty(__int64 *a1, __int64 a2, unsigned __int64 *a3)
{
  __int64 v5; // rbx
  char *v6; // r10
  __int64 v7; // r9
  __int64 v8; // rdx
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // r8
  char v11; // cl
  __int64 v12; // rbx
  unsigned int v13; // r11d
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rcx

  if ( (*((_BYTE *)a1 + 13) & 0x20) == 0 )
    return 0LL;
  v5 = *a1;
  v6 = (char *)(a1 + 1);
  v7 = 0LL;
  v8 = a2 & *a1;
  if ( (__int64 *)(*(_QWORD *)&PspTlsContext.Timer.Processor ^ *(_QWORD *)((a2 & *a1) + 0x10) ^ a2 & *a1) != a1
    || (v9 = v8 + 32 * ((unsigned __int64)(unsigned int)(a2 - v8) >> *v6),
        v10 = v9 - 32LL * *(unsigned __int8 *)(v9 + 26),
        (*(_BYTE *)(v10 + 24) & 3) != 3) )
  {
    NT_ASSERT("StartDescriptor != ((void *)0)");
  }
  v11 = *v6;
  v12 = v10 & v5;
  v13 = *(_BYTE *)(v10 + 24) & 0x1C;
  if ( v13 >= 8 )
  {
    if ( v13 == 8 )
    {
      v14 = v12 + ((unsigned int)((__int64)(v10 - v12) >> 5) << *v6);
      v15 = LOWORD(PspTlsContext.WaitBlock[0].WaitListEntry.Flink) ^ *(unsigned __int16 *)(v14 + 40) ^ (unsigned __int64)(unsigned __int16)(v14 >> 12);
    }
    else
    {
      v15 = 0LL;
    }
  }
  else
  {
    v7 = v12 + ((unsigned int)((__int64)(v10 - v12) >> 5) << v11);
    v15 = *(unsigned __int8 *)(v10 + 31) << v11;
  }
  _InterlockedOr((volatile signed __int32 *)(v10 + 8), 4u);
  *a3 = v15;
  return v7;
}
