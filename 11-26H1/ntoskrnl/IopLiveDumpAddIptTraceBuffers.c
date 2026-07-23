/*
 * XREFs of IopLiveDumpAddIptTraceBuffers @ 0x1405CECD0
 * Callers:
 *     <none>
 * Callees:
 *     KeEnumerateNextProcessor @ 0x14042E520 (KeEnumerateNextProcessor.c)
 *     MiAddRangeToCrashDump @ 0x1406FAE2C (MiAddRangeToCrashDump.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IopLiveDumpAddIptTraceBuffers(__int64 a1, __int64 a2)
{
  unsigned int v3; // ebx
  int v4; // eax
  __int128 v6; // [rsp+20h] [rbp-30h] BYREF
  unsigned __int16 *v7[2]; // [rsp+30h] [rbp-20h] BYREF
  __int16 v8; // [rsp+40h] [rbp-10h]
  int v9; // [rsp+42h] [rbp-Eh]
  __int16 v10; // [rsp+46h] [rbp-Ah]
  unsigned int v11; // [rsp+70h] [rbp+20h] BYREF

  v6 = 0LL;
  v9 = 0;
  v3 = 0;
  v10 = 0;
  v11 = 0;
  if ( IptInterface )
  {
    v7[1] = *(unsigned __int16 **)((char *)&stru_140FC11F0.116 + 4);
    v7[0] = (unsigned __int16 *)&stru_140FC11F0.WaitRegister.Flags;
    v8 = 0;
    while ( !(unsigned int)KeEnumerateNextProcessor(&v11, v7) )
    {
      if ( (int)guard_dispatch_icall_no_overrides(v11, &v6) >= 0 )
      {
        v4 = MiAddRangeToCrashDump(a2, v6, *((_QWORD *)&v6 + 1), 0LL);
        if ( v4 < 0 )
        {
          if ( v4 == -1073741789 )
            return 0LL;
          v3 = v4;
        }
      }
    }
  }
  return v3;
}
