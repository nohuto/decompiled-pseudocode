/*
 * XREFs of ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@V?$CRefCountedObject@ULightweightProperty@LightweightPropertySet@@@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@V?$CRefCountedObject@ULightweightProperty@LightweightPropertySet@@@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@V?$CRefCountedObject@ULightweightProperty@LightweightPropertySet@@@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@V?$CRefCountedObject@ULightweightProperty@LightweightPropertySet@@@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x18008D674
 * Callers:
 *     ?SetProperty@LightweightPropertySet@@QEAAJPEBGKPEAUHWND__@@@Z @ 0x18008D880 (-SetProperty@LightweightPropertySet@@QEAAJPEBGKPEAUHWND__@@@Z.c)
 *     ?s_PropEnumCallback@LightweightPropertySet@@CAHPEAUHWND__@@PEAGPEAX_K@Z @ 0x1801CE300 (-s_PropEnumCallback@LightweightPropertySet@@CAHPEAUHWND__@@PEAGPEAX_K@Z.c)
 * Callees:
 *     ?Realloc@CTCoAllocPolicy@@SAJPEAXK0_KPEAPEAX@Z @ 0x18008CD48 (-Realloc@CTCoAllocPolicy@@SAJPEAXK0_KPEAPEAX@Z.c)
 */

__int64 __fastcall CTSimpleArray<Microsoft::WRL::ComPtr<CRefCountedObject<LightweightPropertySet::LightweightProperty>>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<CRefCountedObject<LightweightPropertySet::LightweightProperty>>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<CRefCountedObject<LightweightPropertySet::LightweightProperty>>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<CRefCountedObject<LightweightPropertySet::LightweightProperty>>>>::_EnsureCapacity(
        __int64 a1,
        unsigned __int64 a2,
        void *a3)
{
  int v4; // r8d
  unsigned __int64 v5; // rbx
  __int64 v6; // rcx
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rbx
  void *v10; // [rsp+50h] [rbp+18h] BYREF

  v10 = a3;
  v4 = -2147024774;
  if ( a2 <= 0xFFFFFFFE )
  {
    v5 = *(_QWORD *)(a1 + 24);
    v4 = 0;
    if ( a2 > v5 )
    {
      v10 = 0LL;
      v6 = 2 * v5;
      if ( !is_mul_ok(v5, 2uLL) )
        return (unsigned int)-2147024362;
      v8 = v5;
      v9 = v5 + 4096;
      if ( v8 <= 0x1000 )
        v9 = v6;
      if ( a2 <= v9 )
      {
        if ( v9 > 0xFFFFFFFE )
          v9 = 4294967294LL;
      }
      else
      {
        v9 = a2;
      }
      v10 = 0LL;
      if ( is_mul_ok(v9, 8uLL) )
      {
        v4 = CTCoAllocPolicy::Realloc((IMalloc *)&v10, (v9 * (unsigned __int128)8uLL) >> 64, *(void **)a1, 8 * v9, &v10);
        if ( v4 >= 0 )
        {
          *(_QWORD *)a1 = v10;
          *(_QWORD *)(a1 + 24) = v9;
        }
      }
      else
      {
        return (unsigned int)-2147024362;
      }
    }
  }
  return (unsigned int)v4;
}
