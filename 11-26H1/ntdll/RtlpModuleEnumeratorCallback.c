/*
 * XREFs of RtlpModuleEnumeratorCallback @ 0x1800FBE50
 * Callers:
 *     <none>
 * Callees:
 *     NtLockVirtualMemory @ 0x180161210 (NtLockVirtualMemory.c)
 */

__int64 __fastcall RtlpModuleEnumeratorCallback(__int64 a1, __int64 a2, _BYTE *a3)
{
  __int64 v5; // rcx
  __int64 result; // rax
  __int16 v7; // dx
  unsigned int v8; // r11d
  unsigned int *v9; // rdx
  unsigned int i; // r8d
  unsigned __int64 v11; // r10
  unsigned __int64 v12; // r9

  v5 = *(_QWORD *)(a1 + 48);
  result = 23117LL;
  if ( *(_WORD *)v5 == 23117 )
  {
    result = *(int *)(v5 + 60);
    if ( *(_DWORD *)(result + v5) == 17744 )
    {
      v7 = *(_WORD *)(result + v5 + 20);
      if ( v7 )
      {
        v8 = *(unsigned __int16 *)(result + v5 + 6);
        if ( (_WORD)v8 )
        {
          if ( v7 == 240 )
          {
            v9 = (unsigned int *)(result + v5 + 264);
            for ( i = 0; i < v8; ++i )
            {
              v11 = v5 + v9[3];
              result = v9[2];
              if ( !(_DWORD)result )
                result = v9[4];
              v12 = (v11 + (unsigned int)result + 4095LL) & 0xFFFFFFFFFFFFF000uLL;
              if ( *(_QWORD *)a2 < v12 && *(_QWORD *)a2 >= v11 )
              {
                *(_QWORD *)(a2 + 16) = v11;
                *(_QWORD *)(a2 + 24) = v12 - v11;
                result = NtLockVirtualMemory(-1LL, a2 + 16, a2 + 24, 1LL);
                *(_DWORD *)(a2 + 8) = result;
                *a3 = 1;
                return result;
              }
              v9 += 10;
            }
          }
        }
      }
    }
  }
  return result;
}
