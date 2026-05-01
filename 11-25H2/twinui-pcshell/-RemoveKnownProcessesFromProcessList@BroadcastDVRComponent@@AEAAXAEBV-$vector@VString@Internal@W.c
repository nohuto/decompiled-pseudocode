/*
 * XREFs of ?RemoveKnownProcessesFromProcessList@BroadcastDVRComponent@@AEAAXAEBV?$vector@VString@Internal@Windows@@V?$allocator@VString@Internal@Windows@@@std@@@std@@AEAV23@@Z @ 0x1800FECA0
 * Callers:
 *     ?EvaluateAppForGameMode@BroadcastDVRComponent@@AEAAXPEAUIApplicationView@@PEAUBroadcastDVRActiveAppInfo@@@Z @ 0x18010F694 (-EvaluateAppForGameMode@BroadcastDVRComponent@@AEAAXPEAUIApplicationView@@PEAUBroadcastDVRActive.c)
 * Callees:
 *     ??1String@Internal@Windows@@QEAA@XZ @ 0x1800FEDD8 (--1String@Internal@Windows@@QEAA@XZ.c)
 */

HSTRING **__fastcall BroadcastDVRComponent::RemoveKnownProcessesFromProcessList(__int64 a1, HSTRING **a2, HSTRING **a3)
{
  HSTRING *v3; // rbx
  HSTRING **v5; // rax
  __int64 v6; // r15
  HSTRING *v7; // r13
  HSTRING *v8; // rsi
  unsigned __int64 v9; // rdi
  HSTRING v10; // rdx
  HSTRING *v11; // r12
  HSTRING v12; // rdx
  HSTRING v13; // rcx
  HSTRING *v14; // rsi
  HSTRING *v15; // rdi
  HSTRING v16; // rcx
  __int64 result; // [rsp+60h] [rbp+8h] BYREF
  HSTRING **v18; // [rsp+68h] [rbp+10h]
  INT32 v19; // [rsp+70h] [rbp+18h] BYREF

  v18 = a2;
  result = a1;
  v3 = *a3;
  v5 = a2;
  v6 = (__int64)(*a3 + 1);
  while ( v3 != a3[1] )
  {
    v7 = v5[1];
    v8 = *v5;
    v9 = v7 - *v5;
    while ( (__int64)v9 > 0 )
    {
      v10 = *v3;
      LODWORD(result) = 0;
      v11 = &v8[v9 >> 1];
      WindowsCompareStringOrdinal(*v11, v10, (INT32 *)&result);
      if ( (_DWORD)result == -1 )
      {
        v8 = v11 + 1;
        v9 += -1LL - (v9 >> 1);
      }
      else
      {
        v9 >>= 1;
      }
    }
    if ( v8 == v7 || (v12 = *v8, v13 = *v3, v19 = 0, WindowsCompareStringOrdinal(v13, v12, &v19), v19 == -1) )
    {
      ++v3;
      v6 += 8LL;
    }
    else
    {
      v14 = a3[1];
      v15 = v3;
      if ( (HSTRING *)v6 != v14 )
      {
        v16 = *v3;
        do
        {
          if ( v16 )
            WindowsDeleteString(v16);
          *v15 = v15[1];
          *++v15 = 0LL;
          v16 = 0LL;
        }
        while ( v15 + 1 != v14 );
      }
      Windows::Internal::String::~String((Windows::Internal::String *)--a3[1]);
    }
    v5 = v18;
  }
  return v5;
}
