/*
 * XREFs of SeSetLearningModeObjectInformation @ 0x14041D674
 * Callers:
 *     RtlpAllowsLowBoxAccess @ 0x14045B09C (RtlpAllowsLowBoxAccess.c)
 *     AlpcpCreateClientPort @ 0x1408F0020 (AlpcpCreateClientPort.c)
 *     ObReferenceObjectByNameEx @ 0x1408F238C (ObReferenceObjectByNameEx.c)
 *     ObReferenceObjectByName @ 0x1408F8820 (ObReferenceObjectByName.c)
 *     ObOpenObjectByNameEx @ 0x14092CD80 (ObOpenObjectByNameEx.c)
 *     ObpLookupObjectName @ 0x14092E280 (ObpLookupObjectName.c)
 * Callees:
 *     ObFastDereferenceObject @ 0x140264CB0 (ObFastDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     RtlStringCbCatW @ 0x14041D8F0 (RtlStringCbCatW.c)
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     RtlStringCbCopyW @ 0x14041DAC0 (RtlStringCbCopyW.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ObQueryNameString @ 0x140922620 (ObQueryNameString.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 *     PsReferenceEffectiveToken @ 0x1409CAEC0 (PsReferenceEffectiveToken.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall SeSetLearningModeObjectInformation(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rsi
  _DWORD *v3; // rax
  int v4; // edi
  void *v5; // rcx
  _OBJECT_NAME_INFORMATION *Pool2; // rax
  _OBJECT_NAME_INFORMATION *v7; // rdi
  NTSTATUS v8; // eax
  size_t v9; // r14
  wchar_t *v10; // rax
  wchar_t *v11; // rsi
  struct _KTHREAD *v12; // rdx
  int v13; // ecx
  _OBJECT_NAME_INFORMATION *v14; // rax
  _BYTE v15[16]; // [rsp+30h] [rbp-10h] BYREF
  PVOID Object; // [rsp+78h] [rbp+38h] BYREF
  ULONG ReturnLength; // [rsp+80h] [rbp+40h] BYREF
  int v18; // [rsp+88h] [rbp+48h] BYREF

  ReturnLength = 0;
  v18 = 0;
  if ( SepLearningModeTokenCount )
  {
    CurrentThread = KeGetCurrentThread();
    v3 = (_DWORD *)PsReferenceEffectiveToken(CurrentThread, 1953654867LL, &v18, &Object, v15, 0LL);
    v4 = v3[50] & 0x1000000;
    if ( v18 == 1 )
      ObFastDereferenceObject(
        (signed __int64 *)&CurrentThread->ApcState.Process[1].ActiveProcessors,
        (ULONG_PTR)v3,
        0x74726853u);
    else
      ObfDereferenceObjectWithTag(v3, 0x74726853u);
    if ( v4 )
    {
      *(_OWORD *)(a1 + 40) = 0LL;
      v5 = *(void **)(a1 + 32);
      if ( !v5
        || (Object = 0LL, ObReferenceObjectByHandle(v5, 0, 0LL, KeGetCurrentThread()->PreviousMode, &Object, 0LL) < 0) )
      {
LABEL_19:
        v12 = KeGetCurrentThread();
        if ( KeGetCurrentIrql() )
          v13 = 2;
        else
          v13 = KeGetCurrentThread()->ApcState.InProgressFlags & 1;
        *(_DWORD *)(a1 + 8) = v13;
        *(_QWORD *)a1 = v12[1].WaitBlock[1].WaitListEntry.Blink;
        v12[1].WaitBlock[1].WaitListEntry.Blink = (struct _LIST_ENTRY *)a1;
        return;
      }
      Pool2 = (_OBJECT_NAME_INFORMATION *)ExAllocatePool2(0x100uLL);
      v7 = Pool2;
      if ( Pool2 )
      {
        v8 = ObQueryNameString(Object, Pool2, 0x210u, &ReturnLength);
        if ( v8 != -1073741820 )
          goto LABEL_11;
        ExFreePoolWithTag(v7, 0);
        v14 = (_OBJECT_NAME_INFORMATION *)ExAllocatePool2(0x100uLL);
        v7 = v14;
        if ( v14 )
        {
          v8 = ObQueryNameString(Object, v14, ReturnLength, &ReturnLength);
LABEL_11:
          if ( v8 >= 0 )
          {
            if ( v7->Name.Buffer )
            {
              v9 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 24) + 2LL) + 2LL + v7->Name.MaximumLength;
              v10 = (wchar_t *)ExAllocatePool2(0x100uLL);
              v11 = v10;
              if ( v10 )
              {
                memset_0(v10, 0, v9);
                RtlStringCbCopyW(v11, v9, v7->Name.Buffer);
                if ( *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL) )
                {
                  RtlStringCbCatW(v11, v9, L"\\");
                  RtlStringCbCatW(v11, v9, *(NTSTRSAFE_PCWSTR *)(*(_QWORD *)(a1 + 24) + 8LL));
                }
                RtlInitUnicodeString((PUNICODE_STRING)(a1 + 40), v11);
              }
            }
          }
          ExFreePoolWithTag(v7, 0);
        }
      }
      ObfDereferenceObjectWithTag(Object, 0x746C6644u);
      goto LABEL_19;
    }
  }
}
