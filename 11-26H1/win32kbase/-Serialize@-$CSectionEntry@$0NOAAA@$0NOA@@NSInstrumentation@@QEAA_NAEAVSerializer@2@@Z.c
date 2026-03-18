/*
 * XREFs of ?Serialize@?$CSectionEntry@$0NOAAA@$0NOA@@NSInstrumentation@@QEAA_NAEAVSerializer@2@@Z @ 0x1401EFFF0
 * Callers:
 *     ?Serialize@?$CTypeIsolation@$0NOAAA@$0NOA@@NSInstrumentation@@QEAA_NAEAVSerializer@2@@Z @ 0x1401F0578 (-Serialize@-$CTypeIsolation@$0NOAAA@$0NOA@@NSInstrumentation@@QEAA_NAEAVSerializer@2@@Z.c)
 * Callees:
 *     RIMLockShared @ 0x14006F3F0 (RIMLockShared.c)
 *     ?W32ReleasePushLockShared@@YAXPEAVW32_PUSH_LOCK@@@Z @ 0x1400B7020 (-W32ReleasePushLockShared@@YAXPEAVW32_PUSH_LOCK@@@Z.c)
 *     ??$Serialize@I@Serializer@NSInstrumentation@@QEAA_NAEAI@Z @ 0x1401EE274 (--$Serialize@I@Serializer@NSInstrumentation@@QEAA_NAEAI@Z.c)
 *     ?AdvanceBytes@Serializer@NSInstrumentation@@QEAA_N_K@Z @ 0x1401EE414 (-AdvanceBytes@Serializer@NSInstrumentation@@QEAA_N_K@Z.c)
 *     ?SerializeBytes@Serializer@NSInstrumentation@@QEAA_NPEAX_K@Z @ 0x1401F0744 (-SerializeBytes@Serializer@NSInstrumentation@@QEAA_NPEAX_K@Z.c)
 */

bool __fastcall NSInstrumentation::CSectionEntry<909312,3552>::Serialize(__int64 a1, NSInstrumentation::Serializer *a2)
{
  unsigned int v4; // ebp
  bool v5; // bl
  __int64 v6; // rsi
  struct W32_PUSH_LOCK *v7; // r14
  __int64 v8; // rbp

  v4 = *(_DWORD *)(*(_QWORD *)(a1 + 32) + 36LL) << 12;
  if ( v4 > 0xDE000 )
    v4 = 909312;
  v5 = 0;
  if ( !NSInstrumentation::Serializer::SerializeBytes(a2, *(void **)(a1 + 24), v4)
    || !NSInstrumentation::Serializer::AdvanceBytes(a2, 909312 - v4) )
  {
    return 0;
  }
  v6 = *(_QWORD *)(a1 + 32);
  v7 = *(struct W32_PUSH_LOCK **)v6;
  RIMLockShared(*(_QWORD *)v6);
  v8 = *(_QWORD *)(v6 + 16) ^ *(_QWORD *)(v6 + 24);
  if ( NSInstrumentation::Serializer::Serialize<unsigned int>((__int64)a2, (_DWORD *)(v6 + 32))
    && NSInstrumentation::Serializer::Serialize<unsigned int>((__int64)a2, (_DWORD *)(v6 + 36)) )
  {
    v5 = NSInstrumentation::Serializer::SerializeBytes(a2, *(void **)(v8 + 8), 0x1CuLL);
  }
  W32ReleasePushLockShared(v7);
  return v5;
}
