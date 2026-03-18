/*
 * XREFs of NVMeSanitizeCommandCompletion @ 0x14001FEF0
 * Callers:
 *     <none>
 * Callees:
 *     GetSrbExtension @ 0x140003A40 (GetSrbExtension.c)
 *     NVMeQueueWorkItem @ 0x14001EC70 (NVMeQueueWorkItem.c)
 */

__int16 __fastcall NVMeSanitizeCommandCompletion(__int64 a1, __int64 a2)
{
  __int64 SrbExtension; // rax
  __int64 v3; // r8
  __int64 v4; // r10
  __int64 v5; // r11
  __int64 v6; // r9

  SrbExtension = GetSrbExtension(a2);
  v6 = SrbExtension;
  if ( v3 )
  {
    LOWORD(SrbExtension) = *(_WORD *)(v3 + 14) & 0x1FE;
    switch ( (_WORD)SrbExtension )
    {
      case 0x3A:
        *(_BYTE *)(v4 + 3) = 5;
        break;
      case 0x38:
        *(_BYTE *)(v4 + 3) = 0;
        *(_BYTE *)(v6 + 4225) &= ~8u;
        *(_DWORD *)(v5 + 4064) |= 1u;
        *(_QWORD *)(v5 + 4056) = v4;
        LOWORD(SrbExtension) = NVMeQueueWorkItem(v5, (__int64)NVMeGetSanitizeLogWorkItem, 0LL, v6);
        return SrbExtension;
      case 0:
        *(_QWORD *)(v5 + 4056) = v4;
        *(_BYTE *)(v4 + 3) = 0;
        *(_BYTE *)(v6 + 4225) &= ~8u;
        return SrbExtension;
      default:
        *(_BYTE *)(v4 + 3) = 4;
        break;
    }
    *(_BYTE *)(v6 + 4225) |= 8u;
  }
  else
  {
    *(_BYTE *)(v4 + 3) = 4;
    *(_BYTE *)(SrbExtension + 4225) |= 8u;
  }
  return SrbExtension;
}
