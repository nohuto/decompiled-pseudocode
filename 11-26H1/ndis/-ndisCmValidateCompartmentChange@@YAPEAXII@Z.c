/*
 * XREFs of ?ndisCmValidateCompartmentChange@@YAPEAXII@Z @ 0x14003F0D0
 * Callers:
 *     ndisCmSetThreadState @ 0x14003EDE0 (ndisCmSetThreadState.c)
 *     NdisSetSessionCompartmentId @ 0x1400CDE70 (NdisSetSessionCompartmentId.c)
 *     ?NdisSetJobObjectCompartmentId@@YAJPEAU_EJOB@@I@Z @ 0x140146684 (-NdisSetJobObjectCompartmentId@@YAJPEAU_EJOB@@I@Z.c)
 * Callees:
 *     NdisGetProcessObjectCompartmentId @ 0x14003F1E0 (NdisGetProcessObjectCompartmentId.c)
 *     ?ndisIfReferenceCompartmentForUser@@YAJPEAU_GUID@@IPEAPEAX@Z @ 0x14003F230 (-ndisIfReferenceCompartmentForUser@@YAJPEAU_GUID@@IPEAPEAX@Z.c)
 *     ?ndisIfDereferenceCompartmentForUser@@YAJPEAX@Z @ 0x1400D092C (-ndisIfDereferenceCompartmentForUser@@YAJPEAX@Z.c)
 *     ?ndisIfGetCompartmentNamespaceGuid@@YAJIPEAU_GUID@@@Z @ 0x1400D0C14 (-ndisIfGetCompartmentNamespaceGuid@@YAJIPEAU_GUID@@@Z.c)
 *     memcmp @ 0x1400EA9E0 (memcmp.c)
 */

void *__fastcall ndisCmValidateCompartmentChange(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // edi
  unsigned int v5; // ebx
  __int64 CurrentProcess; // rax
  unsigned int ProcessObjectCompartmentId; // eax
  unsigned int v8; // esi
  void *v10; // rbx
  struct _GUID Buf2; // [rsp+20h] [rbp-28h] BYREF
  struct _GUID Buf1; // [rsp+30h] [rbp-18h] BYREF
  void *v13; // [rsp+60h] [rbp+18h] BYREF

  Buf1 = 0LL;
  v4 = a2;
  v5 = a1;
  Buf2 = 0LL;
  CurrentProcess = PsGetCurrentProcess(a1, a2, a3, a4);
  ProcessObjectCompartmentId = NdisGetProcessObjectCompartmentId(CurrentProcess);
  v8 = ProcessObjectCompartmentId;
  if ( ProcessObjectCompartmentId != v5
    && ProcessObjectCompartmentId != 1
    && ((int)ndisIfGetCompartmentNamespaceGuid(ProcessObjectCompartmentId, &Buf1) < 0
     || (int)ndisIfGetCompartmentNamespaceGuid(v5, &Buf2) < 0
     || memcmp(&Buf1, &Buf2, 0x10uLL)) )
  {
    return 0LL;
  }
  v13 = 0LL;
  ndisIfReferenceCompartmentForUser(0LL, v4, &v13);
  v10 = v13;
  if ( v13
    && v8 != v4
    && v8 != 1
    && ((int)ndisIfGetCompartmentNamespaceGuid(v8, &Buf1) < 0
     || (int)ndisIfGetCompartmentNamespaceGuid(v4, &Buf2) < 0
     || memcmp(&Buf1, &Buf2, 0x10uLL)) )
  {
    ndisIfDereferenceCompartmentForUser(v10);
    return 0LL;
  }
  return v10;
}
