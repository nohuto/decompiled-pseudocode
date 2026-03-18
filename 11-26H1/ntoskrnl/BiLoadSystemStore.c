/*
 * XREFs of BiLoadSystemStore @ 0x1409CFE10
 * Callers:
 *     BiOpenSystemStore @ 0x1409D43D4 (BiOpenSystemStore.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140430A40 (RtlInitUnicodeString.c)
 *     memmove @ 0x14073D480 (memmove.c)
 *     BiMarkTreatAsSystemStore @ 0x1409CFFAC (BiMarkTreatAsSystemStore.c)
 *     BcdCloseStore @ 0x1409D0088 (BcdCloseStore.c)
 *     BiIsSystemStore @ 0x1409D0134 (BiIsSystemStore.c)
 *     BiAddStoreFromFile @ 0x1409D35AC (BiAddStoreFromFile.c)
 *     BcdGetSystemStorePath @ 0x1409D39D8 (BcdGetSystemStorePath.c)
 *     BiLogMessage @ 0x1409D490C (BiLogMessage.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall BiLoadSystemStore(_QWORD *a1)
{
  void *v2; // rdi
  int SystemStorePath; // eax
  void *v4; // rbp
  unsigned int v5; // ebx
  __int64 v6; // rax
  unsigned int v7; // ebx
  int v8; // esi
  _DWORD *Pool2; // rax
  _DWORD *v10; // r14
  __int64 v11; // r8
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rsi
  int v16; // eax
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-38h] BYREF
  void *Src; // [rsp+68h] [rbp+10h] BYREF
  __int64 v20; // [rsp+70h] [rbp+18h] BYREF

  v20 = 0LL;
  Src = 0LL;
  DestinationString = 0LL;
  v2 = 0LL;
  SystemStorePath = BcdGetSystemStorePath(&Src);
  v4 = Src;
  v5 = SystemStorePath;
  if ( SystemStorePath >= 0 )
  {
    v6 = -1LL;
    do
      ++v6;
    while ( *((_WORD *)Src + v6) );
    v7 = v6 + 1;
    v8 = 2 * (v6 + 1) + 12;
    Pool2 = (_DWORD *)ExAllocatePool2(0x102uLL);
    v2 = Pool2;
    if ( Pool2 )
    {
      v10 = Pool2 + 3;
      *Pool2 = 1;
      Pool2[1] = v8;
      Pool2[2] = 3;
      memmove(Pool2 + 3, v4, 2LL * v7);
      v12 = BiAddStoreFromFile(v2, 0LL, v11, &v20);
      v5 = v12;
      if ( v12 >= 0 )
      {
        v15 = v20;
        LOBYTE(v13) = 1;
        v16 = BiMarkTreatAsSystemStore(v20, v13, v14);
        v5 = v16;
        if ( v16 >= 0 )
        {
          if ( (unsigned __int8)BiIsSystemStore(v15) )
          {
            *a1 = v15;
          }
          else
          {
            BiLogMessage(4LL, L"File is not system store. File: %ws Status: %x", v10, v5);
            BcdCloseStore(v15);
            v5 = -1073741672;
          }
        }
        else
        {
          BiLogMessage(4LL, L"Failed to mark system store. File: %ws Status: %x", v10, (unsigned int)v16);
          BcdCloseStore(v15);
        }
      }
      else
      {
        BiLogMessage(4LL, L"Failed to add system store from file. File: %ws Status: %x", v10, (unsigned int)v12);
        if ( v5 == -1073741757 )
          RtlInitUnicodeString(&DestinationString, (PCWSTR)v4);
      }
    }
    else
    {
      v5 = -1073741670;
    }
  }
  if ( v4 )
    ExFreePoolWithTag(v4, 0x4B444342u);
  if ( v2 )
    ExFreePoolWithTag(v2, 0x4B444342u);
  return v5;
}
