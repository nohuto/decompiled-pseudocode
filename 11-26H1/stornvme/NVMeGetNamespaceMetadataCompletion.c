/*
 * XREFs of NVMeGetNamespaceMetadataCompletion @ 0x140027090
 * Callers:
 *     <none>
 * Callees:
 *     GetSrbExtension @ 0x140003A40 (GetSrbExtension.c)
 *     memmove @ 0x140032740 (memmove.c)
 */

__int64 __fastcall NVMeGetNamespaceMetadataCompletion(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v5; // rsi
  __int64 v6; // r8
  __int64 v7; // r14
  _BYTE *v8; // rdi
  unsigned int v9; // r15d
  unsigned __int64 v10; // rbx
  int v11; // eax
  size_t v12; // r8
  void *v13; // rcx

  result = GetSrbExtension(a2);
  v5 = result;
  if ( v6 && *(_BYTE *)(a2 + 3) == 1 )
  {
    v7 = *(_QWORD *)(result + 4200);
    if ( v7 && (v8 = *(_BYTE **)(result + 4160)) != 0LL )
    {
      v9 = 0;
      v10 = (unsigned __int64)(v8 + 2);
      if ( *v8 )
      {
        while ( 1 )
        {
          if ( v10 >= (unsigned __int64)(v8 + 4096) || !v10 )
            goto LABEL_28;
          v11 = *(_DWORD *)v10 & 0x3F;
          if ( v11 == 1 )
            break;
          switch ( v11 )
          {
            case 2:
              v12 = 64LL;
              if ( *(_WORD *)(v10 + 2) <= 0x40u )
                v12 = *(unsigned __int16 *)(v10 + 2);
              v13 = (void *)(v7 + 232);
              goto LABEL_24;
            case 3:
              v12 = 64LL;
              if ( *(_WORD *)(v10 + 2) <= 0x40u )
                v12 = *(unsigned __int16 *)(v10 + 2);
              v13 = (void *)(v7 + 296);
              goto LABEL_24;
            case 4:
              v12 = 64LL;
              if ( *(_WORD *)(v10 + 2) <= 0x40u )
                v12 = *(unsigned __int16 *)(v10 + 2);
              v13 = (void *)(v7 + 360);
              goto LABEL_24;
          }
LABEL_25:
          ++v9;
          v10 += *(unsigned __int16 *)(v10 + 2) + 4LL;
          result = (unsigned __int8)*v8;
          if ( v9 >= (unsigned int)result )
            goto LABEL_28;
        }
        v12 = 64LL;
        if ( *(_WORD *)(v10 + 2) <= 0x40u )
          v12 = *(unsigned __int16 *)(v10 + 2);
        v13 = (void *)(v7 + 168);
LABEL_24:
        memmove(v13, (const void *)(v10 + 4), v12);
        goto LABEL_25;
      }
    }
    else
    {
      *(_BYTE *)(a2 + 3) = 40;
    }
  }
LABEL_28:
  *(_BYTE *)(v5 + 4225) |= 8u;
  *(_QWORD *)(v5 + 4200) = 0LL;
  if ( *(_BYTE *)(a2 + 3) != 1 && (*(_BYTE *)(a1 + 21) & 8) != 0 )
    return StorPortExtendedFunction(85LL, a1, 0LL, 0LL);
  return result;
}
