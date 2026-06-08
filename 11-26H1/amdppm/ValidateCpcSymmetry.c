/*
 * XREFs of ValidateCpcSymmetry @ 0x140031090
 * Callers:
 *     ValidatePerfDomainSymmetry @ 0x140031908 (ValidatePerfDomainSymmetry.c)
 * Callees:
 *     GetCpcRegisterDefinitionTable @ 0x1400066D0 (GetCpcRegisterDefinitionTable.c)
 *     WPP_RECORDER_SF_SSdd @ 0x140009C5C (WPP_RECORDER_SF_SSdd.c)
 *     WPP_RECORDER_SF_SSs @ 0x14000A248 (WPP_RECORDER_SF_SSs.c)
 *     ValidateCpcResourcePrioritiesSymmetry @ 0x140030E8C (ValidateCpcResourcePrioritiesSymmetry.c)
 *     ValidateRegisterSymmetry @ 0x140032064 (ValidateRegisterSymmetry.c)
 */

__int64 __fastcall ValidateCpcSymmetry(const wchar_t *a1, __int64 a2, const wchar_t *a3, __int64 a4)
{
  int v4; // eax
  int v6; // ecx
  __int64 v11; // r8
  __int64 v12; // r9
  const char **v13; // rbx
  __int64 v14; // rbp
  __int64 v15; // rdx
  int v16; // [rsp+20h] [rbp-58h]
  unsigned int v17; // [rsp+88h] [rbp+10h] BYREF
  const char **v18; // [rsp+98h] [rbp+20h] BYREF

  v4 = *(_DWORD *)(a4 + 4);
  v6 = *(_DWORD *)(a2 + 4);
  v18 = 0LL;
  v17 = 0;
  if ( v6 == v4 )
  {
    GetCpcRegisterDefinitionTable(a2, &v18, &v17);
    if ( v17 )
    {
      v13 = v18;
      v14 = v17;
      do
      {
        if ( !(unsigned __int8)ValidateRegisterSymmetry(*(unsigned int *)v13 + a2, *(unsigned int *)v13 + a4, v11, v12)
          && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          WPP_RECORDER_SF_SSs((__int64)WPP_GLOBAL_Control->DeviceExtension, v15, v11, 0x4Eu, v16, a1, a3, v13[1]);
        }
        v13 += 3;
        --v14;
      }
      while ( v14 );
    }
    return ValidateCpcResourcePrioritiesSymmetry(a1, *(unsigned int **)(a2 + 536), a3, *(_DWORD **)(a4 + 536));
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_SSdd((__int64)WPP_GLOBAL_Control->DeviceExtension, a2, (__int64)a3, 0x4Du, v16, a1, a3);
    return 3221225473LL;
  }
}
