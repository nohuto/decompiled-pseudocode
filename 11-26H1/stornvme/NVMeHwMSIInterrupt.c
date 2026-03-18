/*
 * XREFs of NVMeHwMSIInterrupt @ 0x140009320
 * Callers:
 *     <none>
 * Callees:
 *     NVMeMaskInterrupt @ 0x140006BC0 (NVMeMaskInterrupt.c)
 *     RequestPendingCompletion @ 0x1400095A0 (RequestPendingCompletion.c)
 *     NVMeCompletionDpcRoutine @ 0x1400096D0 (NVMeCompletionDpcRoutine.c)
 */

__int64 __fastcall NVMeHwMSIInterrupt(__int64 a1, unsigned __int16 a2)
{
  __int64 result; // rax
  unsigned __int8 v5; // bp
  char v6; // r14
  __int64 v7; // r8
  int v8; // eax
  __int64 v9; // rdx
  unsigned int i; // esi
  __int64 v11; // r10
  __int64 v12; // r10
  _BOOL8 v13; // rbx
  __int64 v14; // r10
  signed __int32 v15[8]; // [rsp+0h] [rbp-48h] BYREF
  _BOOL8 v16; // [rsp+20h] [rbp-28h]
  int *v17; // [rsp+28h] [rbp-20h]
  int v18; // [rsp+58h] [rbp+10h] BYREF

  if ( *(_WORD *)(a1 + 272) == 1 )
    a2 = -1;
  result = RequestPendingCompletion(a1, a2);
  v5 = result;
  if ( (_BYTE)result )
  {
    if ( (*(_DWORD *)(a1 + 24) & 0x10) == 0 )
    {
      if ( *(_BYTE *)(a1 + 20) || (*(_DWORD *)(a1 + 108) & 1) != 0 )
      {
        v6 = 1;
        v13 = 0LL;
      }
      else
      {
        v6 = 0;
        v13 = (*(_DWORD *)(a1 + 56) & 0x4000) != 0;
      }
      if ( a2 == 0xFFFF || *(_WORD *)(a1 + 272) <= 1u )
      {
        if ( (*(_WORD *)(*(_QWORD *)(a1 + 544) + 16LL * *(unsigned __int16 *)(a1 + 714) + 14) & 1) != *(_WORD *)(a1 + 716) )
        {
          NVMeMaskInterrupt(a1, *(_WORD *)(a1 + 720));
          if ( v6 )
          {
            NVMeCompletionDpcRoutine(v14 + 24, a1, v14, 0LL);
          }
          else
          {
            v18 = 0;
            v17 = &v18;
            v16 = v13;
            StorPortNotification(4098LL, a1, v14 + 24);
          }
        }
        v9 = *(_QWORD *)(a1 + 944);
        for ( i = 0; v9; ++i )
        {
          if ( i >= *(unsigned __int16 *)(a1 + 332) )
            break;
          v11 = v9 + 392LL * i;
          if ( (*(_WORD *)(*(_QWORD *)v11 + 16LL * *(unsigned __int16 *)(v11 + 170) + 14) & 1) != *(_WORD *)(v11 + 172) )
          {
            NVMeMaskInterrupt(a1, *(_WORD *)(v11 + 176));
            if ( v6 )
            {
              NVMeCompletionDpcRoutine(v12 + 24, a1, v12, 0LL);
            }
            else
            {
              v18 = 0;
              v17 = &v18;
              v16 = v13;
              StorPortNotification(4098LL, a1, v12 + 24);
            }
          }
          v9 = *(_QWORD *)(a1 + 944);
        }
      }
      else
      {
        if ( a2 )
          v7 = 392LL * a2 + *(_QWORD *)(a1 + 944) - 392LL;
        else
          v7 = a1 + 544;
        if ( (*(_BYTE *)(a1 + 21) & 0x20) == 0 )
        {
          v8 = *(_DWORD *)(a1 + 16);
          if ( v8 == 1 || v8 == 2 )
          {
            *(_DWORD *)(*(_QWORD *)(a1 + 176) + 12LL) = 1 << *(_BYTE *)(v7 + 176);
            _InterlockedOr(v15, 0);
            *(_BYTE *)(a1 + 21) |= 0x20u;
          }
        }
        if ( v6 )
        {
          NVMeCompletionDpcRoutine(v7 + 24, a1, v7, 0LL);
        }
        else
        {
          v18 = 0;
          v17 = &v18;
          v16 = v13;
          StorPortNotification(4098LL, a1, v7 + 24);
        }
      }
      return v5;
    }
  }
  else
  {
    ++*(_QWORD *)(a1 + 3792);
  }
  return result;
}
