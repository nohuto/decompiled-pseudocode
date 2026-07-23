/*
 * XREFs of IvtInitializeScalableModePasidTables @ 0x1405A98F4
 * Callers:
 *     IvtExtendScalableModePasidTables @ 0x1405A8BA0 (IvtExtendScalableModePasidTables.c)
 * Callees:
 *     IvtBuildScalableModePasidDirectoryEntry @ 0x140510548 (IvtBuildScalableModePasidDirectoryEntry.c)
 *     IvtBuildScalableModePasidTableS1Entry @ 0x1405247C8 (IvtBuildScalableModePasidTableS1Entry.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall IvtInitializeScalableModePasidTables(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, int a5)
{
  __int64 v6; // rbx
  __int64 v8; // rcx
  __int64 v9; // r9
  __int64 v10; // rax
  __int128 *v11; // rax
  __int128 v12; // xmm2
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  unsigned int v16; // ebx
  __int64 result; // rax
  int v18; // [rsp+20h] [rbp-98h]
  __int64 v19; // [rsp+40h] [rbp-78h] BYREF
  _OWORD v20[4]; // [rsp+50h] [rbp-68h] BYREF

  v6 = a3;
  v19 = 0LL;
  memset_0(v20, 0, sizeof(v20));
  memset_0(*(void **)(a2 + 8 * v6 + 64), 0, 0x1000uLL);
  v10 = *(_QWORD *)(a1 + 104);
  if ( !(_DWORD)v6 )
  {
    if ( a5 == 1 )
    {
      IvtBuildScalableModePasidTableS1Entry(
        a1,
        1,
        (unsigned __int64)qword_140F87888 >> 12,
        0,
        v18,
        0,
        *(_DWORD *)(a2 + 44),
        (unsigned __int64 *)v20);
    }
    else if ( v10 )
    {
      v11 = *(__int128 **)(v10 + 64);
      v12 = *v11;
      v13 = v11[2];
      v20[1] = v11[1];
      v14 = v11[3];
      *((_QWORD *)&v20[0] + 1) = *((_QWORD *)&v12 + 1);
      v20[2] = v13;
      *(_QWORD *)&v20[0] = v12 & 0xFFFFFFFFFFFFFFFDuLL;
      v20[3] = v14;
    }
    _RAX = *(_QWORD *)(a2 + 64);
    __asm { movdir64b rax, zmmword ptr [rsp+0B8h+var_68] }
  }
  v16 = (_DWORD)v6 << 6;
  IvtBuildScalableModePasidDirectoryEntry(v8, a2, v16, v9, &v19);
  result = v19;
  *(_QWORD *)(*(_QWORD *)(a2 + 56) + 8LL * ((v16 >> 6) & 0x3FFF)) = v19;
  return result;
}
