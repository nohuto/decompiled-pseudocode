/*
 * XREFs of NvmeControllerBuildIoPollingConfigurationCompletion @ 0x1400CED80
 * Callers:
 *     <none>
 * Callees:
 *     Feature_Servicing_StorNVMeDriverTimeoutOverride__private_IsEnabledDeviceUsageNoInline @ 0x14005D160 (Feature_Servicing_StorNVMeDriverTimeoutOverride__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall NvmeControllerBuildIoPollingConfigurationCompletion(__int64 a1, __int64 *a2, __int64 a3)
{
  int v5; // r9d
  __int64 v6; // rdi
  int IsEnabledDeviceUsageNoInline; // eax
  __int64 v8; // r8
  unsigned __int16 v9; // cx
  char v10; // cl
  _BYTE *v11; // rax
  __int64 v12; // rcx
  char v13; // cl
  _BYTE *v14; // rax
  __int64 result; // rax

  if ( a3 )
  {
    *(_WORD *)(*a2 + 4260) = *(_WORD *)(a3 + 14);
    if ( ((*(unsigned __int16 *)(*a2 + 4260) >> 9) & 7) == 0 )
    {
      v5 = *(unsigned __int16 *)(*a2 + 4260) >> 1;
      if ( (unsigned __int8)v5 <= 6u && !(_BYTE)v5 )
      {
        v6 = *(_QWORD *)(*a2 + 4160);
        if ( *(_DWORD *)a3 == 1313882949 )
        {
          *(_WORD *)(*(_QWORD *)(a1 + 1736) + 20LL) = *(_WORD *)v6;
          IsEnabledDeviceUsageNoInline = Feature_Servicing_StorNVMeDriverTimeoutOverride__private_IsEnabledDeviceUsageNoInline();
          v8 = *(_QWORD *)(a1 + 1736);
          v9 = *(_WORD *)(v8 + 20);
          if ( IsEnabledDeviceUsageNoInline )
          {
            if ( v9 >= 0x100u )
            {
              v10 = *(_WORD *)(v6 + 2);
              if ( *(_WORD *)(v6 + 2) > 0x64u )
                v10 = 100;
              *(_BYTE *)(v8 + 24) = v10;
              *(_DWORD *)(*(_QWORD *)(a1 + 1736) + 28LL) = *(_DWORD *)(v6 + 4);
              *(_DWORD *)(*(_QWORD *)(a1 + 1736) + 32LL) = *(_DWORD *)(v6 + 8);
              v11 = *(_BYTE **)(a1 + 1736);
              if ( v11[24] )
                *v11 = 1;
              v12 = *(_QWORD *)(a1 + 1736);
              if ( *(_WORD *)(v12 + 20) >= 0x101u )
              {
                *(_WORD *)(v12 + 36) = *(_WORD *)(v6 + 12);
                *(_WORD *)(*(_QWORD *)(a1 + 1736) + 38LL) = *(_WORD *)(v6 + 14);
              }
            }
          }
          else if ( v9 == 256 )
          {
            v13 = *(_WORD *)(v6 + 2);
            if ( *(_WORD *)(v6 + 2) > 0x64u )
              v13 = 100;
            *(_BYTE *)(v8 + 24) = v13;
            *(_DWORD *)(*(_QWORD *)(a1 + 1736) + 28LL) = *(_DWORD *)(v6 + 4);
            *(_DWORD *)(*(_QWORD *)(a1 + 1736) + 32LL) = *(_DWORD *)(v6 + 8);
            v14 = *(_BYTE **)(a1 + 1736);
            if ( v14[24] )
              *v14 = 1;
          }
        }
      }
    }
  }
  result = *a2;
  _interlockedbittestandreset((volatile signed __int32 *)(*a2 + 4256), 3u);
  return result;
}
