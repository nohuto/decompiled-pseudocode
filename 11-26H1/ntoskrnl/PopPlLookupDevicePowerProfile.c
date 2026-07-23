/*
 * XREFs of PopPlLookupDevicePowerProfile @ 0x140615500
 * Callers:
 *     PopPlRegisterDevice @ 0x1404E8C8C (PopPlRegisterDevice.c)
 *     PopPlActivateDeviceIterator @ 0x140615320 (PopPlActivateDeviceIterator.c)
 *     PopPlIdleDeviceIterator @ 0x140615470 (PopPlIdleDeviceIterator.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopPlLookupDevicePowerProfile(__int64 a1, unsigned __int16 *a2)
{
  unsigned __int64 v2; // r15
  __int64 v3; // r9
  unsigned __int64 i; // r8
  __int64 v7; // rdx
  __int64 v8; // rax
  unsigned __int16 *v9; // rcx
  unsigned __int16 *v10; // rbx
  unsigned __int16 *v11; // rsi
  signed __int64 v12; // rbx
  int v13; // edi
  int v14; // r10d
  unsigned __int16 v15; // bp

  v2 = *(_QWORD *)(a1 + 48);
  v3 = 0LL;
  for ( i = 0LL; i < v2; ++i )
  {
    v7 = *(_QWORD *)(*(_QWORD *)(a1 + 56) + 8 * i);
    if ( a2 == (unsigned __int16 *)v7 )
      return *(_QWORD *)(*(_QWORD *)(a1 + 56) + 8 * i);
    v8 = *a2;
    if ( (_WORD)v8 == *(_WORD *)v7 )
    {
      v9 = (unsigned __int16 *)*((_QWORD *)a2 + 1);
      v10 = *(unsigned __int16 **)(v7 + 8);
      if ( v9 != v10 )
      {
        v11 = (unsigned __int16 *)((char *)v9 + v8);
        v12 = (char *)v10 - (char *)v9;
        while ( v9 < v11 )
        {
          v13 = *v9;
          v14 = *(unsigned __int16 *)((char *)v9 + v12);
          if ( v13 != v14 )
          {
            v15 = v13 - 32;
            if ( (unsigned int)(v13 - 97) > 0x19 )
              v15 = *v9;
            if ( (unsigned int)(v14 - 97) <= 0x19 )
              LOWORD(v14) = v14 - 32;
            if ( v15 != (_WORD)v14 )
              goto LABEL_15;
          }
          ++v9;
        }
      }
      return *(_QWORD *)(*(_QWORD *)(a1 + 56) + 8 * i);
    }
LABEL_15:
    ;
  }
  return v3;
}
