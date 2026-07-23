/*
 * XREFs of RtlpLookupUserFunctionTableInverted @ 0x14042E7D0
 * Callers:
 *     RtlpLookupUserFunctionTable @ 0x1402CB950 (RtlpLookupUserFunctionTable.c)
 *     RtlGetImageBaseAndLoadConfig @ 0x14042E700 (RtlGetImageBaseAndLoadConfig.c)
 * Callees:
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     RtlReadULong64FromUser @ 0x140782054 (RtlReadULong64FromUser.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     ProbeForRead @ 0x1408F5E40 (ProbeForRead.c)
 */

volatile void *__fastcall RtlpLookupUserFunctionTableInverted(unsigned __int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  char *KernelShadowStackBase; // r12
  char *v5; // r14
  int ULongFromUser; // esi
  char *v7; // r13
  unsigned __int64 ULong64FromUser; // rbx
  int v9; // eax
  unsigned int v10; // ebx
  int v11; // edi
  int v12; // esi
  unsigned __int64 v13; // r14
  unsigned __int64 v14; // rax
  volatile void *v15; // rbx
  SIZE_T v16; // rdx
  signed __int32 v18[8]; // [rsp+0h] [rbp-88h] BYREF
  int v19; // [rsp+20h] [rbp-68h]
  int v20; // [rsp+24h] [rbp-64h]
  volatile void *v21; // [rsp+28h] [rbp-60h]
  volatile void *Address[2]; // [rsp+38h] [rbp-50h] BYREF
  SIZE_T Length; // [rsp+48h] [rbp-40h]
  int v25; // [rsp+A0h] [rbp+18h]
  char *v26; // [rsp+A8h] [rbp+20h]

  v2 = a2;
  *(_OWORD *)Address = 0LL;
  Length = 0LL;
  KernelShadowStackBase = (char *)stru_140FC11F0.KernelShadowStackBase;
  v5 = (char *)stru_140FC11F0.KernelShadowStackBase + 8;
  v26 = (char *)stru_140FC11F0.KernelShadowStackBase + 8;
  ULongFromUser = RtlReadULongFromUser((char *)stru_140FC11F0.KernelShadowStackBase + 8);
  v25 = ULongFromUser;
  v19 = 0;
  v20 = 0;
  v7 = KernelShadowStackBase + 16;
  ULong64FromUser = RtlReadULong64FromUser(KernelShadowStackBase + 24);
  if ( a1 < ULong64FromUser || a1 >= ULong64FromUser + (unsigned int)RtlReadULongFromUser(KernelShadowStackBase + 32) )
  {
    v9 = RtlReadULongFromUser(KernelShadowStackBase);
    v10 = v9 - 1;
    if ( v9 != 1 && v10 <= 0x200 )
    {
      v11 = 1;
      v20 = 1;
      v19 = v9 - 1;
      while ( (int)v10 >= v11 )
      {
        v12 = (int)(v11 + v10) >> 1;
        v7 = &KernelShadowStackBase[16 * v12 + 16 + 8 * v12];
        v13 = RtlReadULong64FromUser(v7 + 8);
        v14 = v13 + (unsigned int)RtlReadULongFromUser(v7 + 16);
        if ( v14 < v13 )
          break;
        if ( a1 < v13 )
        {
          if ( !v12 )
            return 0LL;
          v10 = v12 - 1;
          v19 = v12 - 1;
        }
        else
        {
          if ( a1 < v14 )
          {
            v2 = a2;
            ULongFromUser = v25;
            v5 = v26;
            goto LABEL_14;
          }
          v11 = v12 + 1;
          v20 = v12 + 1;
        }
      }
    }
    return 0LL;
  }
LABEL_14:
  if ( !v7 )
    return 0LL;
  RtlCopyFromUser(Address, v7, 0x18uLL);
  v15 = Address[0];
  v21 = Address[0];
  *(volatile void **)v2 = Address[0];
  *(volatile void **)(v2 + 8) = Address[1];
  v16 = HIDWORD(Length);
  *(_QWORD *)(v2 + 16) = Length;
  ProbeForRead(v15, v16, 4u);
  ProbeForRead(*(volatile void **)(v2 + 8), 0x40uLL, 0x10000u);
  _InterlockedOr(v18, 0);
  if ( (unsigned int)RtlReadULongFromUser(v5) == ULongFromUser && (ULongFromUser & 1) == 0 )
    return v15;
  else
    return 0LL;
}
