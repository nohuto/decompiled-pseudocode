/*
 * XREFs of ?RemoveKnownProcessesFromProcessList@BroadcastDVRComponent@@AEAAXAEBV?$vector@VString@Internal@Windows@@V?$allocator@VString@Internal@Windows@@@std@@@std@@AEAV23@@Z @ 0x1800F0A18
 * Callers:
 *     ?EvaluateAppForGameMode@BroadcastDVRComponent@@AEAAXPEAUIApplicationView@@PEAUBroadcastDVRActiveAppInfo@@@Z @ 0x18004ECD4 (-EvaluateAppForGameMode@BroadcastDVRComponent@@AEAAXPEAUIApplicationView@@PEAUBroadcastDVRActive.c)
 * Callees:
 *     ??1String@Internal@Windows@@QEAA@XZ @ 0x1800F0B54 (--1String@Internal@Windows@@QEAA@XZ.c)
 */

void __fastcall BroadcastDVRComponent::RemoveKnownProcessesFromProcessList(__int64 a1, HSTRING **a2, HSTRING **a3)
{
  HSTRING *v3; // rbx
  HSTRING *v6; // r15
  HSTRING *v7; // r14
  unsigned __int64 v8; // rdi
  HSTRING v9; // rdx
  HSTRING *v10; // r12
  HSTRING v11; // rdx
  HSTRING v12; // rcx
  HSTRING *v13; // rbp
  HSTRING *v14; // rdi
  HSTRING *v15; // r14
  __int64 result; // [rsp+50h] [rbp+8h] BYREF

  result = a1;
  v3 = *a3;
  while ( v3 != a3[1] )
  {
    v6 = a2[1];
    v7 = *a2;
    v8 = v6 - *a2;
    while ( (__int64)v8 > 0 )
    {
      v9 = *v3;
      LODWORD(result) = 0;
      v10 = &v7[v8 >> 1];
      WindowsCompareStringOrdinal(*v10, v9, (INT32 *)&result);
      if ( (_DWORD)result == -1 )
      {
        v7 = v10 + 1;
        v8 += -1LL - (v8 >> 1);
      }
      else
      {
        v8 >>= 1;
      }
    }
    if ( v7 == v6
      || (v11 = *v7,
          v12 = *v3,
          LODWORD(result) = 0,
          WindowsCompareStringOrdinal(v12, v11, (INT32 *)&result),
          (_DWORD)result == -1) )
    {
      ++v3;
    }
    else
    {
      v13 = a3[1];
      v14 = v3 + 1;
      v15 = v3;
      while ( v14 != v13 )
      {
        if ( *v15 )
        {
          WindowsDeleteString(*v15);
          *v15 = 0LL;
        }
        *v15++ = *v14;
        *v14++ = 0LL;
      }
      Windows::Internal::String::~String((Windows::Internal::String *)--a3[1]);
    }
  }
}
