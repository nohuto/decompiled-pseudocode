/*
 * XREFs of ProcessCompletionQueues @ 0x140007D70
 * Callers:
 *     NVMeHwInterrupt @ 0x140007B20 (NVMeHwInterrupt.c)
 * Callees:
 *     NVMeMaskInterrupt @ 0x140006BC0 (NVMeMaskInterrupt.c)
 *     NVMeCompletionDpcRoutine @ 0x1400096D0 (NVMeCompletionDpcRoutine.c)
 */

__int64 __fastcall ProcessCompletionQueues(__int64 a1, unsigned __int16 a2, char a3)
{
  __int64 result; // rax
  char v5; // si
  __int64 v6; // r8
  int v7; // eax
  __int64 v8; // rdx
  unsigned int i; // ebp
  __int64 v10; // r10
  __int64 v11; // r10
  _BOOL8 v12; // rbx
  __int64 v13; // r10
  signed __int32 v14[8]; // [rsp+0h] [rbp-38h] BYREF
  _BOOL8 v15; // [rsp+20h] [rbp-18h]
  int *v16; // [rsp+28h] [rbp-10h]
  int v17; // [rsp+40h] [rbp+8h] BYREF

  result = *(unsigned int *)(a1 + 24);
  if ( (result & 0x10) == 0 )
  {
    if ( *(_BYTE *)(a1 + 20) || a3 || (*(_DWORD *)(a1 + 108) & 1) != 0 )
    {
      v5 = 1;
      v12 = 0LL;
    }
    else
    {
      v5 = 0;
      v12 = (*(_DWORD *)(a1 + 56) & 0x4000) != 0;
    }
    if ( a2 == 0xFFFF || *(_WORD *)(a1 + 272) <= 1u )
    {
      result = *(_QWORD *)(a1 + 544);
      if ( (*(_WORD *)(result + 16LL * *(unsigned __int16 *)(a1 + 714) + 14) & 1) != *(_WORD *)(a1 + 716) )
      {
        NVMeMaskInterrupt(a1, *(_WORD *)(a1 + 720));
        if ( v5 )
        {
          result = NVMeCompletionDpcRoutine(v13 + 24, a1, v13, 0LL);
        }
        else
        {
          v17 = 0;
          v16 = &v17;
          v15 = v12;
          result = StorPortNotification(4098LL, a1, v13 + 24);
        }
      }
      v8 = *(_QWORD *)(a1 + 944);
      for ( i = 0; v8; ++i )
      {
        result = *(unsigned __int16 *)(a1 + 332);
        if ( i >= (unsigned int)result )
          break;
        v10 = v8 + 392LL * i;
        result = *(_QWORD *)v10;
        if ( (*(_WORD *)(*(_QWORD *)v10 + 16LL * *(unsigned __int16 *)(v10 + 170) + 14) & 1) != *(_WORD *)(v10 + 172) )
        {
          NVMeMaskInterrupt(a1, *(_WORD *)(v10 + 176));
          if ( v5 )
          {
            result = NVMeCompletionDpcRoutine(v11 + 24, a1, v11, 0LL);
          }
          else
          {
            v17 = 0;
            v16 = &v17;
            v15 = v12;
            result = StorPortNotification(4098LL, a1, v11 + 24);
          }
        }
        v8 = *(_QWORD *)(a1 + 944);
      }
    }
    else
    {
      if ( a2 )
        v6 = 392LL * a2 + *(_QWORD *)(a1 + 944) - 392LL;
      else
        v6 = a1 + 544;
      if ( (*(_BYTE *)(a1 + 21) & 0x20) == 0 )
      {
        v7 = *(_DWORD *)(a1 + 16);
        if ( v7 == 1 || v7 == 2 )
        {
          *(_DWORD *)(*(_QWORD *)(a1 + 176) + 12LL) = 1 << *(_BYTE *)(v6 + 176);
          _InterlockedOr(v14, 0);
          *(_BYTE *)(a1 + 21) |= 0x20u;
        }
      }
      if ( v5 )
      {
        return NVMeCompletionDpcRoutine(v6 + 24, a1, v6, 0LL);
      }
      else
      {
        v17 = 0;
        v16 = &v17;
        v15 = v12;
        return StorPortNotification(4098LL, a1, v6 + 24);
      }
    }
  }
  return result;
}
