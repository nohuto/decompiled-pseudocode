/*
 * XREFs of HeadlessInit @ 0x140CEBD48
 * Callers:
 *     InitBootProcessor @ 0x140CB07CC (InitBootProcessor.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     MmLockPagableDataSection @ 0x140ABC640 (MmLockPagableDataSection.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 *     HdlspEnableTerminal @ 0x140C529D4 (HdlspEnableTerminal.c)
 */

void __fastcall HeadlessInit(__int64 a1)
{
  char *v2; // rdi
  ULONG_PTR Pool2; // rax
  ULONG_PTR v4; // rbx
  int v5; // ecx
  int v6; // edx
  int v7; // eax
  int v8; // ecx
  int v9; // edx
  __int16 v10; // ax
  __int16 v11; // ax
  char v12; // dl
  int v13; // edx
  ULONG_PTR v14; // rax
  ULONG_PTR v15; // rax
  ULONG_PTR v16; // rax
  PVOID v17; // rax
  void *v18; // rcx
  void *v19; // rcx
  void *v20; // rcx
  _DWORD v21[2]; // [rsp+20h] [rbp-138h] BYREF
  __int16 v22; // [rsp+28h] [rbp-130h]
  __int16 v23; // [rsp+2Ah] [rbp-12Eh]
  __int16 v24; // [rsp+2Ch] [rbp-12Ch]
  __int16 v25; // [rsp+2Eh] [rbp-12Ah]
  char v26; // [rsp+30h] [rbp-128h]
  char v27; // [rsp+33h] [rbp-125h]

  v2 = *(char **)(*(_QWORD *)(a1 + 240) + 48LL);
  if ( v2 && (*((_DWORD *)v2 + 2) <= 4u || *v2) )
  {
    Pool2 = ExAllocatePool2(64LL, 0x88uLL, 0x736C6448u);
    v4 = Pool2;
    if ( Pool2 )
    {
      v5 = *(_DWORD *)(Pool2 + 48);
      *(_QWORD *)Pool2 = 0LL;
      v6 = v5 ^ ((unsigned __int16)v5 ^ (unsigned __int16)((unsigned __int16)*((_DWORD *)v2 + 2) << 9)) & 0xE00;
      *(_DWORD *)(Pool2 + 48) = v6;
      *(_QWORD *)(Pool2 + 64) = *((_QWORD *)v2 + 2);
      *(_DWORD *)(Pool2 + 52) = *((_DWORD *)v2 + 1);
      v7 = v6 ^ ((unsigned __int8)v6 ^ (unsigned __int8)(v2[3] << 7)) & 0x80;
      *(_DWORD *)(v4 + 48) = v7;
      v8 = v7 ^ ((unsigned __int16)v7 ^ (unsigned __int16)((unsigned __int8)v2[2] << 8)) & 0x100;
      *(_DWORD *)(v4 + 48) = v8;
      v9 = v8 ^ ((unsigned __int8)v8 ^ (unsigned __int8)(8 * *v2)) & 8;
      *(_DWORD *)(v4 + 48) = v9;
      LOBYTE(v8) = v2[56];
      *(_BYTE *)(v4 + 116) = v8;
      *(_BYTE *)(v4 + 117) = 0;
      *(_BYTE *)(v4 + 84) = v2[57];
      *(_BYTE *)(v4 + 85) = v2[58];
      *(_BYTE *)(v4 + 86) = v2[59];
      *(_BYTE *)(v4 + 87) = v2[60];
      *(_OWORD *)(v4 + 100) = *(_OWORD *)(v2 + 40);
      if ( (_BYTE)v8 )
      {
        v9 |= 0x1000u;
        *(_DWORD *)(v4 + 48) = v9;
      }
      *(_BYTE *)(v4 + 118) = 1;
      *(_BYTE *)(v4 + 119) = v2[36] & 1;
      *(_WORD *)(v4 + 120) = *((_WORD *)v2 + 13);
      *(_WORD *)(v4 + 122) = *((_WORD *)v2 + 12);
      *(_WORD *)(v4 + 124) = *((_WORD *)v2 + 15);
      *(_BYTE *)(v4 + 126) = v2[28];
      *(_BYTE *)(v4 + 127) = v2[32];
      *(_BYTE *)(v4 + 128) = v2[33];
      v10 = *((_WORD *)v2 + 12);
      if ( v10 != -1 )
      {
        if ( v10 )
        {
          v11 = *((_WORD *)v2 + 13);
          if ( v11 != -1 )
          {
            if ( v11 )
            {
              *(_DWORD *)(v4 + 48) = v9 | 0x1000;
              if ( (*((_DWORD *)v2 + 9) & 1) == 0 )
              {
                memset_0(v21, 0, 0x110uLL);
                v12 = v2[33];
                v27 = *v2;
                v24 = *((_WORD *)v2 + 12);
                v23 = *((_WORD *)v2 + 13);
                v21[0] = (unsigned __int8)v2[28];
                v22 = *((_WORD *)v2 + 15);
                v13 = v2[32] & 0x1F | (32 * (v12 & 7));
                v25 = -1;
                v21[1] = v13;
                v26 = -1;
                guard_dispatch_icall_no_overrides(a1, (__int64)v21);
              }
            }
          }
        }
      }
      v14 = ExAllocatePool2(64LL, 0x3800uLL, 0x736C6448u);
      *(_QWORD *)(v4 + 16) = v14;
      if ( v14
        && (*(_DWORD *)(v4 + 96) = -1,
            v15 = ExAllocatePool2(64LL, 0x50uLL, 0x736C6448u),
            (*(_QWORD *)(v4 + 24) = v15) != 0LL)
        && (v16 = ExAllocatePool2(64LL, 0x50uLL, 0x736C6448u), (*(_QWORD *)(v4 + 32) = v16) != 0LL)
        && (v17 = MmLockPagableDataSection(HdlspDispatch), (*(_QWORD *)(v4 + 8) = v17) != 0LL) )
      {
        if ( *(_DWORD *)(v4 + 52) == 9600 )
        {
          *(_DWORD *)(v4 + 80) = 1301;
          *(_QWORD *)(v4 + 72) = -13010LL;
        }
        HeadlessGlobals = (PKSPIN_LOCK)v4;
        HdlspEnableTerminal(1);
      }
      else
      {
        v18 = *(void **)(v4 + 16);
        if ( v18 )
          ExFreePoolWithTag(v18, 0);
        v19 = *(void **)(v4 + 24);
        if ( v19 )
          ExFreePoolWithTag(v19, 0);
        v20 = *(void **)(v4 + 32);
        if ( v20 )
          ExFreePoolWithTag(v20, 0);
        ExFreePoolWithTag((PVOID)v4, 0);
      }
    }
  }
}
