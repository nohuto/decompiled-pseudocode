/*
 * XREFs of ?HampExtendedExecutionCheckPolicy@@YAJPEAU_HAM_ACTIVITY_PROPERTIES@@PEAXPEAU_RM_PSM_HOST_INFO@@W4_HAM_EXTENDED_EXECUTION_REASON@@@Z @ 0x180042714
 * Callers:
 *     ?HamSrvCreateExtendedExecution@@YAJPEAU_HAM_CLIENT_CONTEXT@@W4_HAM_EXTENDED_EXECUTION_REASON@@PEBGPEA_K@Z @ 0x180041E8C (-HamSrvCreateExtendedExecution@@YAJPEAU_HAM_CLIENT_CONTEXT@@W4_HAM_EXTENDED_EXECUTION_REASON@@PE.c)
 * Callees:
 *     ?HampSystemCheckLocationCapability@@YAJPEAXPEAE@Z @ 0x18006E134 (-HampSystemCheckLocationCapability@@YAJPEAXPEAE@Z.c)
 */

__int64 __fastcall HampExtendedExecutionCheckPolicy(unsigned int *a1, void *a2, __int64 a3, int a4)
{
  __int64 v4; // rdi
  unsigned __int8 v7; // al
  int v8; // eax
  int v9; // ecx
  unsigned int v10; // eax
  int v11; // ecx
  int v12; // r9d
  unsigned int v13; // eax
  unsigned int v14; // ecx
  __int64 result; // rax
  const wchar_t *v16; // rdx
  unsigned __int8 v17; // [rsp+48h] [rbp+20h] BYREF

  v4 = a4;
  v17 = 0;
  if ( !(_DWORD)v4 )
    goto LABEL_2;
  if ( (_DWORD)v4 == 1 )
  {
    result = HampSystemCheckLocationCapability(a2, &v17);
  }
  else
  {
    switch ( (_DWORD)v4 )
    {
      case 2:
LABEL_2:
        v7 = 1;
        goto LABEL_3;
      case 3:
        v16 = L"extendedExecutionBackgroundAudio";
        break;
      case 4:
        v16 = L"extendedExecutionUnconstrained";
        break;
      default:
        return 3221225659LL;
    }
    result = CapabilityCheck(a2, v16, &v17);
  }
  if ( (int)result < 0 )
    return result;
  v7 = v17;
LABEL_3:
  if ( !v7 )
    return 3221225506LL;
  v8 = a1[1] | 9;
  v9 = a1[2] | 0x11;
  a1[1] = v8;
  a1[2] = v9;
  if ( (_DWORD)v4 == 4 || (v9 |= 2u, v8 |= 0x202u, a1[2] = v9, a1[1] = v8, (v4 & 0xFFFFFFFD) == 0) )
  {
    a1[1] = v8 | 4;
    a1[2] = v9 | 4;
    a1[92] &= 0xFFFFFFFC;
    *((_QWORD *)a1 + 40) |= 0x20uLL;
  }
  v10 = *a1;
  if ( (_DWORD)v4 == 2 )
  {
    v11 = 256;
    v12 = 256;
    v13 = v10 & 0xFFFD73FF | 0x28800;
  }
  else
  {
    v11 = 128;
    v13 = v10 | 0x28400;
    v12 = 64;
  }
  a1[1] |= v12;
  a1[2] |= v11;
  v14 = dword_1800BBAB8[v4];
  *a1 = v13;
  a1[67] = v14;
  if ( v14 != 5 )
    a1[68] = 300;
  return 0LL;
}
