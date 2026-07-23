/*
 * XREFs of RtlpMuiRegCreateKernelRegistryInfo @ 0x140724660
 * Callers:
 *     MUIRegistrySystemRoutine @ 0x140849990 (MUIRegistrySystemRoutine.c)
 * Callees:
 *     RtlpMuiRegCreateRegistryInfo @ 0x1408AE624 (RtlpMuiRegCreateRegistryInfo.c)
 *     RtlpMuiRegFreeRegistryInfo @ 0x1408AE700 (RtlpMuiRegFreeRegistryInfo.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByLangId @ 0x1408AEC08 (RtlpMuiRegGetInstalledLanguageIndexByLangId.c)
 *     RtlpMuiRegLoadRegistryInfo @ 0x1408AF5D8 (RtlpMuiRegLoadRegistryInfo.c)
 *     _RtlpMuiRegSerializeRegistryInfo @ 0x1408B061C (_RtlpMuiRegSerializeRegistryInfo.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall RtlpMuiRegCreateKernelRegistryInfo(
        _QWORD *a1,
        _DWORD *a2,
        _DWORD *a3,
        int a4,
        _DWORD *a5,
        unsigned int a6,
        _DWORD *a7)
{
  int v10; // ebp
  __int64 RegistryInfo; // rax
  _QWORD *v12; // rdi
  int v13; // ebx
  __int64 v14; // r8
  __int64 v15; // rcx
  unsigned int v16; // eax
  _WORD *v17; // rcx
  __int64 Pool2; // rax
  void *v19; // rsi
  _DWORD v21[14]; // [rsp+20h] [rbp-38h] BYREF

  v10 = 0;
  if ( a1 && a2 && a3 && a5 && a7 )
  {
    RegistryInfo = RtlpMuiRegCreateRegistryInfo();
    v12 = (_QWORD *)RegistryInfo;
    if ( RegistryInfo )
    {
      v13 = RtlpMuiRegLoadRegistryInfo(RegistryInfo);
      if ( v13 >= 0 )
      {
        v15 = v12[3];
        v16 = *(unsigned __int16 *)(v15 + 6);
        if ( (_WORD)v16 )
        {
          v17 = *(_WORD **)(v15 + 16);
          v14 = v16;
          do
          {
            if ( (*v17 & 0x9020) == 0x20 && (*v17 & 3) != 0 )
              ++v10;
            v17 += 14;
            --v14;
          }
          while ( v14 );
        }
        *a3 = v10;
        *a5 = 0;
        if ( a4 )
        {
          LOBYTE(v14) = 1;
          if ( (int)RtlpMuiRegGetInstalledLanguageIndexByLangId(v12, (unsigned __int16)a4, v14, 0LL) >= 0 )
            *a5 = 1;
        }
        *a7 = 0;
        if ( a6 )
        {
          LOBYTE(v14) = 1;
          if ( (int)RtlpMuiRegGetInstalledLanguageIndexByLangId(v12, a6, v14, 0LL) >= 0 )
            *a7 = 1;
        }
        v21[0] = 0;
        v13 = RtlpMuiRegSerializeRegistryInfo(v12, 0LL, v21);
        if ( v13 >= 0 )
        {
          if ( v21[0] && (Pool2 = ExAllocatePool2(0x100uLL), (v19 = (void *)Pool2) != 0LL) )
          {
            v13 = RtlpMuiRegSerializeRegistryInfo(v12, Pool2, v21);
            if ( v13 < 0 )
            {
              ExFreePoolWithTag(v19, 0);
            }
            else
            {
              *a1 = v19;
              *a2 = v21[0];
            }
          }
          else
          {
            v13 = -1073741801;
          }
        }
      }
      RtlpMuiRegFreeRegistryInfo(v12, 4095LL);
      ExFreePoolWithTag(v12, 0);
    }
    else
    {
      return (unsigned int)-1073741801;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v13;
}
