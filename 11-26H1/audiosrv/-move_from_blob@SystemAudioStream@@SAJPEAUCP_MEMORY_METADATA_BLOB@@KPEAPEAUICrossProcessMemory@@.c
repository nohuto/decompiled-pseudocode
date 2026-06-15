/*
 * XREFs of ?move_from_blob@SystemAudioStream@@SAJPEAUCP_MEMORY_METADATA_BLOB@@KPEAPEAUICrossProcessMemory@@0@Z @ 0x1801146E0
 * Callers:
 *     ?move_initialize_from@SystemAudioStream@@QEAAJKPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1800ACB9C (-move_initialize_from@SystemAudioStream@@QEAAJKPEAUSYSTEM_AUDIO_STREAM@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VCCrossProcessKSMemory@@UICrossProcessMemory@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUICrossProcessMemory@@@Z @ 0x1800ABA78 (--$MakeAndInitialize@VCCrossProcessKSMemory@@UICrossProcessMemory@@$$V@Details@WRL@Microsoft@@YA.c)
 *     ??$MakeAndInitialize@V?$CSectionBasedCPClientMemory@UControlData_V0@@@@UICrossProcessMemory@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUICrossProcessMemory@@@Z @ 0x18015E8D0 (--$MakeAndInitialize@V-$CSectionBasedCPClientMemory@UControlData_V0@@@@UICrossProcessMemory@@$$V.c)
 *     ??$MakeAndInitialize@V?$CSectionBasedCPClientMemory@UControlData_V1@@@@UICrossProcessMemory@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUICrossProcessMemory@@@Z @ 0x18015E970 (--$MakeAndInitialize@V-$CSectionBasedCPClientMemory@UControlData_V1@@@@UICrossProcessMemory@@$$V.c)
 *     ??$MakeAndInitialize@V?$CSectionBasedCPClientMemory@UControlData_V2@@@@UICrossProcessMemory@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUICrossProcessMemory@@@Z @ 0x18015EA10 (--$MakeAndInitialize@V-$CSectionBasedCPClientMemory@UControlData_V2@@@@UICrossProcessMemory@@$$V.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall SystemAudioStream::move_from_blob(
        struct CP_MEMORY_METADATA_BLOB *a1,
        unsigned int a2,
        struct ICrossProcessMemory **a3,
        struct CP_MEMORY_METADATA_BLOB *a4)
{
  int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // r9
  int v9; // eax
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // r9
  int v16; // eax
  __int64 v17; // r8
  struct CP_MEMORY_METADATA_BLOB *v18; // rax
  __int128 v19; // xmm1
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *(_DWORD *)a1 == 1 )
  {
    if ( a2 >= 3 )
    {
      v6 = -2147024809;
      v7 = 100LL;
      v8 = 2147942487LL;
LABEL_6:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v7,
        (int)"avcore\\audiocore\\engine\\core\\crossprocessengineobjects\\cpclientmemory.cpp",
        (const char *)v8);
      v11 = 118LL;
LABEL_7:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v11,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
        (const char *)(unsigned int)v6);
      return (unsigned int)v6;
    }
    v9 = ((__int64 (__fastcall *)(struct ICrossProcessMemory **, struct HINSTANCE__ *, struct ICrossProcessMemory **, struct CP_MEMORY_METADATA_BLOB *))funcs_180114726[a2])(
           a3,
           &_ImageBase,
           a3,
           a4);
    v6 = v9;
    v8 = (unsigned int)v9;
    if ( v9 < 0 )
    {
      v7 = 101LL;
      goto LABEL_6;
    }
    v6 = (*(__int64 (__fastcall **)(_QWORD, struct CP_MEMORY_METADATA_BLOB *, __int64, _QWORD))(*(_QWORD *)*a3 + 24LL))(
           *a3,
           a1,
           v10,
           (unsigned int)v9);
    if ( v6 < 0 )
    {
      v11 = 119LL;
      goto LABEL_7;
    }
  }
  else
  {
    v13 = 2LL;
    if ( *(_DWORD *)a1 != 2 )
    {
      if ( *(_DWORD *)a1 != 4 )
      {
        v18 = a1;
        do
        {
          *(_OWORD *)a4 = *(_OWORD *)v18;
          *((_OWORD *)a4 + 1) = *((_OWORD *)v18 + 1);
          *((_OWORD *)a4 + 2) = *((_OWORD *)v18 + 2);
          *((_OWORD *)a4 + 3) = *((_OWORD *)v18 + 3);
          *((_OWORD *)a4 + 4) = *((_OWORD *)v18 + 4);
          *((_OWORD *)a4 + 5) = *((_OWORD *)v18 + 5);
          *((_OWORD *)a4 + 6) = *((_OWORD *)v18 + 6);
          a4 = (struct CP_MEMORY_METADATA_BLOB *)((char *)a4 + 128);
          v19 = *((_OWORD *)v18 + 7);
          v18 = (struct CP_MEMORY_METADATA_BLOB *)((char *)v18 + 128);
          *((_OWORD *)a4 - 1) = v19;
          --v13;
        }
        while ( v13 );
        *(_OWORD *)a4 = *(_OWORD *)v18;
        *((_OWORD *)a4 + 1) = *((_OWORD *)v18 + 1);
        *((_QWORD *)a4 + 4) = *((_QWORD *)v18 + 4);
        goto LABEL_26;
      }
      if ( a2 < 3 )
      {
        v16 = ((__int64 (__fastcall *)(struct ICrossProcessMemory **, struct HINSTANCE__ *, struct ICrossProcessMemory **, struct CP_MEMORY_METADATA_BLOB *))funcs_1801147FB[a2])(
                a3,
                &_ImageBase,
                a3,
                a4);
        v6 = v16;
        v15 = (unsigned int)v16;
        if ( v16 >= 0 )
        {
          v6 = (*(__int64 (__fastcall **)(_QWORD, struct CP_MEMORY_METADATA_BLOB *, __int64, _QWORD))(*(_QWORD *)*a3 + 24LL))(
                 *a3,
                 a1,
                 v17,
                 (unsigned int)v16);
          if ( v6 < 0 )
          {
            v11 = 132LL;
            goto LABEL_7;
          }
          goto LABEL_26;
        }
        v14 = 188LL;
      }
      else
      {
        v6 = -2147024809;
        v14 = 187LL;
        v15 = 2147942487LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v14,
        (int)"avcore\\audiocore\\engine\\core\\crossprocessengineobjects\\cpclientmemory.cpp",
        (const char *)v15);
      v11 = 131LL;
      goto LABEL_7;
    }
    v6 = Microsoft::WRL::Details::MakeAndInitialize<CCrossProcessKSMemory,ICrossProcessMemory,>(a3);
    if ( v6 < 0 )
    {
      v11 = 124LL;
      goto LABEL_7;
    }
    v6 = (*(__int64 (__fastcall **)(_QWORD, struct CP_MEMORY_METADATA_BLOB *))(*(_QWORD *)*a3 + 24LL))(*a3, a1);
    if ( v6 < 0 )
    {
      v11 = 125LL;
      goto LABEL_7;
    }
  }
LABEL_26:
  *(_DWORD *)a1 = 0;
  return 0LL;
}
