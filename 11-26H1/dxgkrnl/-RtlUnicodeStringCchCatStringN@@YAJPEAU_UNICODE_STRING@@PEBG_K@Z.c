/*
 * XREFs of ?RtlUnicodeStringCchCatStringN@@YAJPEAU_UNICODE_STRING@@PEBG_K@Z @ 0x14008438C
 * Callers:
 *     ?VmBusSendGetRegistryKeys@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAG@Z @ 0x14022FAE8 (-VmBusSendGetRegistryKeys@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAG@Z.c)
 * Callees:
 *     RtlUnicodeStringValidateWorker_0 @ 0x140079D04 (RtlUnicodeStringValidateWorker_0.c)
 */

NTSTATUS __fastcall RtlUnicodeStringCchCatStringN(struct _UNICODE_STRING *a1, const unsigned __int16 *a2, ULONG a3)
{
  NTSTATUS result; // eax
  __int64 v4; // rcx
  unsigned __int16 *v5; // r10
  _WORD *v6; // r11
  __int64 v7; // rcx
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // rdx
  _WORD *v10; // rbx
  __int16 v11; // cx
  __int64 v12; // r9
  unsigned __int64 v13; // r8

  result = RtlUnicodeStringValidateWorker_0(a1, (const size_t)a2, a3);
  if ( result >= 0 && v4 )
  {
    v7 = *(_QWORD *)(v4 + 8);
    v8 = (unsigned __int64)v5[1] >> 1;
    v9 = (unsigned __int64)*v5 >> 1;
  }
  else
  {
    v7 = 0LL;
    v8 = 0LL;
    v9 = 0LL;
    if ( result < 0 )
      return result;
  }
  v10 = (_WORD *)(v7 + 2 * v9);
  v11 = 0;
  v12 = 1LL;
  result = 0;
  v13 = v8 - v9;
  if ( v13 )
  {
    while ( v12 )
    {
      if ( *v6 )
      {
        *v10++ = *v6++;
        --v12;
        ++v11;
        if ( --v13 )
          continue;
      }
      if ( v13 || !v12 )
        break;
      goto LABEL_11;
    }
  }
  else
  {
LABEL_11:
    if ( *v6 )
      result = -2147483643;
  }
  *v5 = 2 * (v9 + v11);
  return result;
}
