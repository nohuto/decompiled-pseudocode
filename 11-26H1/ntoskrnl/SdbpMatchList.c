/*
 * XREFs of SdbpMatchList @ 0x14088B4CC
 * Callers:
 *     SdbpMatchAll @ 0x140719160 (SdbpMatchAll.c)
 *     SdbpMatchEquality @ 0x140719210 (SdbpMatchEquality.c)
 *     SdbpMatchOne @ 0x14088B7E0 (SdbpMatchOne.c)
 *     SdbpCheckForMatch @ 0x140A974B0 (SdbpCheckForMatch.c)
 * Callees:
 *     Feature_MissingMatcherBehaviorIgnoreAndDoNotCache__private_IsEnabledDeviceUsageNoInline @ 0x140718E08 (Feature_MissingMatcherBehaviorIgnoreAndDoNotCache__private_IsEnabledDeviceUsageNoInline.c)
 *     SdbpUmaInit_PCWSTR @ 0x1407196AC (SdbpUmaInit_PCWSTR.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     SdbpIsSdbCapabilityPresent @ 0x14088B0E8 (SdbpIsSdbCapabilityPresent.c)
 *     SdbGetStringTagPtr @ 0x1409D4804 (SdbGetStringTagPtr.c)
 *     SdbFindFirstTag @ 0x1409D4F20 (SdbFindFirstTag.c)
 *     SdbGetNextChild @ 0x1409D5104 (SdbGetNextChild.c)
 *     SdbGetFirstChild @ 0x1409D51F4 (SdbGetFirstChild.c)
 *     AslFree @ 0x1409D6144 (AslFree.c)
 *     SdbpFindMatcher @ 0x140B40618 (SdbpFindMatcher.c)
 */

__int64 __fastcall SdbpMatchList(
        int *a1,
        int *a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        __int64 a6,
        int a7,
        int a8,
        int a9)
{
  unsigned int v10; // ebx
  int v11; // r15d
  int v12; // r12d
  int v13; // edi
  unsigned int i; // eax
  __int64 v15; // rcx
  unsigned int v16; // esi
  int v17; // eax
  unsigned int FirstTag; // eax
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 (*StringTagPtr)(void); // rax
  __int128 v22; // kr00_16
  int v24; // [rsp+40h] [rbp-30h]
  int v25; // [rsp+44h] [rbp-2Ch]
  int v26; // [rsp+48h] [rbp-28h] BYREF
  int v27; // [rsp+4Ch] [rbp-24h] BYREF
  int v28; // [rsp+50h] [rbp-20h]
  __int64 v29; // [rsp+58h] [rbp-18h] BYREF
  __int128 v30; // [rsp+60h] [rbp-10h] BYREF

  v27 = 0;
  v29 = 0LL;
  v26 = 0;
  v10 = 0;
  v25 = 0;
  a9 = 1;
  v11 = 0;
  v28 = 1;
  v12 = 0;
  v24 = 0;
  v13 = 0;
  v30 = 0LL;
  for ( i = SdbGetFirstChild(a4, a5); ; i = SdbGetNextChild(a4, a5, v16) )
  {
    v16 = i;
    if ( !i )
    {
LABEL_29:
      v10 = 1;
      goto LABEL_30;
    }
    if ( SdbpFindMatcher((unsigned int)&v29, (unsigned int)&v26, a3, a4, i) )
    {
      v10 = guard_dispatch_icall_no_overrides((__int64)&a9, a3);
      if ( !v10 )
        goto LABEL_30;
    }
    else
    {
      if ( v26 == 2 )
      {
        v17 = 1;
      }
      else
      {
        if ( v26 != 3 )
        {
          if ( v26 == 4
            && (unsigned int)Feature_MissingMatcherBehaviorIgnoreAndDoNotCache__private_IsEnabledDeviceUsageNoInline() )
          {
            *(_DWORD *)(a6 + 80) = 1;
          }
          continue;
        }
        v17 = 0;
      }
      a9 = v17;
    }
    v24 = ++v13;
    if ( (unsigned int)SdbFindFirstTag(a4, v16, 4099LL) )
      a9 = a9 == 0;
    FirstTag = SdbFindFirstTag(a4, v16, 24636LL);
    if ( FirstTag )
    {
      StringTagPtr = (__int64 (*)(void))SdbGetStringTagPtr(a4, FirstTag, v19, v20);
      SdbpUmaInit_PCWSTR(StringTagPtr, (__int64 (**)(void))&v30);
      v22 = v30;
      if ( !(_QWORD)v30 && *((_QWORD *)&v30 + 1) )
        goto LABEL_33;
      SdbpIsSdbCapabilityPresent(&v27, a3, v30);
      if ( (_QWORD)v22 && (_QWORD)v22 != *((_QWORD *)&v22 + 1) )
        AslFree(v15, v22);
      v11 = v25;
      v30 = 0LL;
      if ( v27 )
        a9 = a9 == 0;
    }
    if ( a8 )
      break;
    if ( a9 == a7 )
      goto LABEL_29;
LABEL_12:
    ;
  }
  if ( !v11 || v28 == a9 )
  {
    v11 = 1;
    v25 = 1;
    v28 = a9;
    goto LABEL_12;
  }
  v12 = 1;
  v10 = 1;
LABEL_30:
  if ( (_QWORD)v30 && (_QWORD)v30 != *((_QWORD *)&v30 + 1) )
    AslFree(v15, v30);
LABEL_33:
  if ( v10 == 1 )
  {
    if ( a8 )
      *a1 = v12 ^ 1;
    else
      *a1 = a9;
    if ( a2 )
      *a2 = v24;
  }
  return v10;
}
