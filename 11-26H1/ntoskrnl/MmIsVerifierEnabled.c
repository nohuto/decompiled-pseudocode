/*
 * XREFs of MmIsVerifierEnabled @ 0x140C27210
 * Callers:
 *     <none>
 * Callees:
 *     VfDriverIsKernelImageAddress @ 0x140C4CBB8 (VfDriverIsKernelImageAddress.c)
 */

NTSTATUS __stdcall MmIsVerifierEnabled(PULONG VerifierFlags)
{
  NTSTATUS v2; // r9d
  char v4; // r8
  unsigned int v5; // r11d
  __int64 v6; // r10
  ULONG v7; // r8d
  unsigned __int64 v8; // rax
  unsigned __int8 v9; // al
  int v10; // eax
  bool v11; // zf
  unsigned __int64 v12; // rcx
  unsigned __int64 retaddr; // [rsp+28h] [rbp+0h]

  v2 = -1073741637;
  if ( !VerifierFlags )
    return -1073741811;
  if ( (_DWORD)VfRuleClasses )
  {
    if ( (unsigned int)VfDriverIsKernelImageAddress(retaddr) )
    {
      if ( (v4 & 2) != 0 )
      {
        *VerifierFlags = 2;
        return 0;
      }
    }
    else
    {
      while ( v5 < 8 )
      {
        v6 = 32LL * v5;
        v7 = *(_DWORD *)((char *)&unk_140E08D58 + v6);
        if ( v7 )
        {
          v11 = (v7 & (unsigned int)VfRuleClasses) == 0;
        }
        else
        {
          v8 = *(unsigned int *)((char *)&unk_140E08D5C + v6);
          if ( (unsigned int)v8 < 0x40 )
          {
            v10 = *((_DWORD *)&VfRuleClasses + (v8 >> 5));
            v9 = _bittest(&v10, *(_DWORD *)((_BYTE *)&unk_140E08D5C + v6) & 0x1F);
          }
          else
          {
            v9 = 0;
          }
          v11 = v9 == 0;
        }
        if ( !v11 )
        {
          v12 = *(_QWORD *)((char *)&unk_140E08D48 + v6);
          if ( retaddr > v12 && retaddr < *(_QWORD *)((char *)&unk_140E08D50 + v6) + v12 )
          {
            if ( !v7 )
              v7 = *(_DWORD *)((char *)&unk_140E08D5C + v6);
            *VerifierFlags = v7;
            return 0;
          }
        }
        ++v5;
      }
    }
  }
  return v2;
}
