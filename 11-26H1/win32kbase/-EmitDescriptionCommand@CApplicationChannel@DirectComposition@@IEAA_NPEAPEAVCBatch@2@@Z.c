/*
 * XREFs of ?EmitDescriptionCommand@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x140125E44
 * Callers:
 *     ?BuildNinjaBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0K@Z @ 0x1401B2C40 (-BuildNinjaBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0K@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1400ADE60 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     strnlen @ 0x1401C7A8C (strnlen.c)
 *     memmove @ 0x14024C2C0 (memmove.c)
 */

bool __fastcall DirectComposition::CApplicationChannel::EmitDescriptionCommand(
        DirectComposition::CApplicationChannel *this,
        struct DirectComposition::CBatch ***a2)
{
  __int64 v5; // rcx
  const char *ProcessImageFileName; // rbp
  unsigned int v7; // eax
  unsigned int v8; // ebx
  unsigned int v9; // edi
  _DWORD *v10; // rax
  _DWORD *v11; // rdi
  void *v12; // [rsp+40h] [rbp+8h] BYREF

  if ( (*((_BYTE *)this + 264) & 0x40) != 0 )
  {
    v5 = *((_QWORD *)this + 2);
    if ( v5 )
      ProcessImageFileName = (const char *)PsGetProcessImageFileName(v5);
    else
      ProcessImageFileName = "System";
    v7 = strnlen(ProcessImageFileName, 0x80uLL);
    v12 = 0LL;
    v8 = v7;
    v9 = (v7 + 16) & 0xFFFFFFFC;
    if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, v9, &v12) )
    {
      v10 = v12;
      *(_DWORD *)v12 = v9;
      v11 = v10 + 3;
      v10[2] = v8;
      v10[1] = 42;
      memmove(v10 + 3, ProcessImageFileName, v8);
      *((_BYTE *)v11 + v8) = 0;
      *((_BYTE *)this + 264) &= ~0x40u;
    }
  }
  return (*((_BYTE *)this + 264) & 0x40) == 0;
}
