/*
 * XREFs of SdbpCheckAllAttributes @ 0x140B47B94
 * Callers:
 *     SdbpCheckMatchingWildcardFiles @ 0x140780CF0 (SdbpCheckMatchingWildcardFiles.c)
 *     SdbpCheckMatchingFiles @ 0x140888DB0 (SdbpCheckMatchingFiles.c)
 * Callees:
 *     SdbpUmaInit_PCWSTR @ 0x1407196AC (SdbpUmaInit_PCWSTR.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     SdbReadQWORDTag @ 0x14088BF50 (SdbReadQWORDTag.c)
 *     SdbpCheckAttribute @ 0x14088D628 (SdbpCheckAttribute.c)
 *     AslFileAllocAndGetAttributes @ 0x140892080 (AslFileAllocAndGetAttributes.c)
 *     AslFileFreeAttributes @ 0x1408925F0 (AslFileFreeAttributes.c)
 *     SdbGetStringTagPtr @ 0x1409D4804 (SdbGetStringTagPtr.c)
 *     SdbFindFirstTag @ 0x1409D4F20 (SdbFindFirstTag.c)
 *     AslLogCallPrintf @ 0x1409D5294 (AslLogCallPrintf.c)
 *     SdbReadWORDTag @ 0x1409D53C0 (SdbReadWORDTag.c)
 *     SdbReadDWORDTag @ 0x1409D5464 (SdbReadDWORDTag.c)
 *     AslFree @ 0x1409D6144 (AslFree.c)
 *     AslAlloc @ 0x1409D8260 (AslAlloc.c)
 */

__int64 __fastcall SdbpCheckAllAttributes(int *a1, __int64 a2, void *a3, unsigned int a4, __int64 a5)
{
  unsigned int v6; // r15d
  unsigned int v7; // r14d
  __int64 v8; // rbx
  int v9; // esi
  __int64 (*v10)(void); // rdi
  int Attributes; // ebx
  char *v13; // r13
  unsigned int v14; // ecx
  int *i; // rax
  unsigned int FirstTag; // eax
  __int64 v17; // r8
  __int64 v18; // r9
  unsigned int v19; // ebx
  __int64 *p_WORDTag; // r14
  __int64 v21; // rcx
  __int64 (*StringTagPtr)(void); // rax
  __int64 v23; // rax
  int *v24; // rsi
  __int64 v25; // rcx
  __int16 WORDTag; // [rsp+30h] [rbp-38h] BYREF
  unsigned int v27; // [rsp+34h] [rbp-34h]
  int DWORDTag; // [rsp+38h] [rbp-30h] BYREF
  int v29; // [rsp+3Ch] [rbp-2Ch] BYREF
  int *v30; // [rsp+40h] [rbp-28h]
  __int64 QWORDTag; // [rsp+48h] [rbp-20h] BYREF
  __int64 (*v32[3])(void); // [rsp+50h] [rbp-18h] BYREF
  unsigned __int16 v37; // [rsp+D0h] [rbp+68h]

  v6 = 0;
  DWORDTag = 0;
  QWORDTag = 0LL;
  v7 = a4;
  *a1 = 0;
  v8 = (__int64)a3;
  WORDTag = 0;
  v9 = 1;
  v29 = 1;
  *(_OWORD *)v32 = 0LL;
  if ( !a5 )
    goto LABEL_4;
  if ( *(_DWORD *)(a5 + 80) )
  {
    if ( !*(_QWORD *)(a5 + 32) )
    {
LABEL_4:
      v10 = v32[0];
      Attributes = 0;
      goto LABEL_5;
    }
  }
  else if ( !*(_QWORD *)(a5 + 8) )
  {
    goto LABEL_4;
  }
  v10 = v32[0];
  v13 = (char *)AslAlloc();
  if ( v13 )
  {
    v14 = 0;
    for ( i = (int *)&unk_140E0EE94; ; i = v30 + 2 )
    {
      v30 = i;
      v27 = v14;
      if ( v14 >= 0x29 )
        break;
      v37 = *((_WORD *)i - 2);
      FirstTag = SdbFindFirstTag(v8, v7, v37);
      v19 = FirstTag;
      if ( FirstTag )
      {
        p_WORDTag = 0LL;
        v21 = v37 & 0xF000;
        switch ( (_DWORD)v21 )
        {
          case 0x3000:
            WORDTag = SdbReadWORDTag((__int64)a3, FirstTag, 0);
            p_WORDTag = (__int64 *)&WORDTag;
            v6 = 2;
            break;
          case 0x4000:
            DWORDTag = SdbReadDWORDTag((__int64)a3, FirstTag, 0);
            p_WORDTag = (__int64 *)&DWORDTag;
            v6 = 4;
            break;
          case 0x5000:
            QWORDTag = SdbReadQWORDTag((__int64)a3, FirstTag, 0LL, v18);
            p_WORDTag = &QWORDTag;
            v6 = 8;
            break;
          case 0x6000:
            if ( v10 && v10 != v32[1] )
              AslFree(v21, v10);
            *(_OWORD *)v32 = 0LL;
            StringTagPtr = (__int64 (*)(void))SdbGetStringTagPtr(a3, v19, v17, v18);
            SdbpUmaInit_PCWSTR(StringTagPtr, v32);
            v10 = v32[0];
            p_WORDTag = (__int64 *)v32[0];
            if ( !v32[0] && v32[1] )
            {
              Attributes = -1073741801;
              goto LABEL_44;
            }
            v23 = -1LL;
            do
              ++v23;
            while ( *((_WORD *)v32[0] + v23) );
            v6 = 2 * v23 + 2;
            break;
        }
        v24 = v30;
        Attributes = AslFileAllocAndGetAttributes((__int64)v13, a5, 1LL << *v30);
        if ( Attributes < 0 )
        {
          AslLogCallPrintf(1LL, (__int64)"SdbpCheckAllAttributes");
          goto LABEL_44;
        }
        if ( (*(_DWORD *)&v13[32 * *v24 + 24] & 1) == 0 )
          goto LABEL_43;
        if ( !(unsigned int)SdbpCheckAttribute(&v29, v37, p_WORDTag, v6, (__int64)&v13[32 * *v24]) )
        {
          Attributes = -1073741595;
          AslLogCallPrintf(1LL, (__int64)"SdbpCheckAllAttributes");
          goto LABEL_44;
        }
        v9 = v29;
        if ( *(_QWORD *)(a2 + 1752) )
          guard_dispatch_icall_no_overrides(v37, (__int64)p_WORDTag);
        v6 = 0;
        if ( !v9 )
          break;
        v7 = a4;
      }
      v14 = v27 + 1;
      v8 = (__int64)a3;
    }
    *a1 = v9;
LABEL_43:
    Attributes = 0;
LABEL_44:
    AslFileFreeAttributes(v13);
    AslFree(v25, v13);
  }
  else
  {
    Attributes = -1073741801;
  }
LABEL_5:
  if ( v10 && v10 != v32[1] )
    AslFree((__int64)a1, v10);
  return (unsigned int)Attributes;
}
