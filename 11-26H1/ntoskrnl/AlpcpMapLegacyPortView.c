/*
 * XREFs of AlpcpMapLegacyPortView @ 0x1408EB9BC
 * Callers:
 *     AlpcpAcceptConnectPort @ 0x1408ECFF0 (AlpcpAcceptConnectPort.c)
 *     AlpcpFormatConnectionRequest @ 0x1408EE1CC (AlpcpFormatConnectionRequest.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     MmGetSectionInformation @ 0x1408EBD40 (MmGetSectionInformation.c)
 *     AlpcpCreateSectionView @ 0x1408F1878 (AlpcpCreateSectionView.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 *     AlpcpCreateSection @ 0x14098C8B8 (AlpcpCreateSection.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x14098FEF0 (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpDereferenceBlobEx @ 0x140991360 (AlpcpDereferenceBlobEx.c)
 *     AlpcpDeleteBlob @ 0x140992A94 (AlpcpDeleteBlob.c)
 *     AlpcpUnlockBlob @ 0x1409936F0 (AlpcpUnlockBlob.c)
 */

__int64 __fastcall AlpcpMapLegacyPortView(__int64 a1, __int64 a2, __int64 a3)
{
  void *v3; // rsi
  NTSTATUS SectionInformation; // edi
  __int64 v7; // rcx
  __int64 v8; // rdx
  unsigned __int64 v9; // r15
  __int64 v10; // r12
  ULONG_PTR v11; // rsi
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v15; // [rsp+30h] [rbp-20h] BYREF
  __int128 v16; // [rsp+38h] [rbp-18h] BYREF
  unsigned __int64 v17; // [rsp+48h] [rbp-8h]
  PVOID Object; // [rsp+98h] [rbp+48h] BYREF
  __int64 v19; // [rsp+A0h] [rbp+50h]
  ULONG_PTR BugCheckParameter2; // [rsp+A8h] [rbp+58h] BYREF

  v19 = a3;
  v3 = *(void **)(a2 + 8);
  BugCheckParameter2 = 0LL;
  v17 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  if ( !v3 )
    return 3221225480LL;
  Object = 0LL;
  SectionInformation = ObReferenceObjectByHandle(
                         v3,
                         6u,
                         MmSectionObjectType,
                         KeGetCurrentThread()->PreviousMode,
                         &Object,
                         0LL);
  if ( SectionInformation >= 0 )
  {
    SectionInformation = MmGetSectionInformation(Object, 0LL, &v16);
    if ( SectionInformation >= 0 )
    {
      if ( (DWORD2(v16) & 0x800000) != 0 )
      {
        SectionInformation = -1073741637;
      }
      else
      {
        v7 = (unsigned int)(AlpcpViewGranularity - 1);
        v8 = ~((unsigned int)AlpcpViewGranularity - 1LL);
        v9 = v8 & (v7 + *(unsigned int *)(a2 + 16));
        v10 = v8 & (v7 + *(_QWORD *)(a2 + 24));
        if ( v10 + v9 < v9 )
        {
          SectionInformation = -1073741811;
        }
        else if ( v10 + v9 > v17 )
        {
          SectionInformation = -1073741670;
        }
        else
        {
          SectionInformation = AlpcpCreateSection(a1, 0LL, 0LL, v3, v17, &BugCheckParameter2);
          if ( SectionInformation >= 0 )
          {
            v11 = BugCheckParameter2;
            SectionInformation = AlpcpCreateSectionView(BugCheckParameter2, (__int64)&v15);
            if ( SectionInformation < 0 )
            {
              if ( (unsigned __int8)AlpcpDeleteBlob(v11) )
                AlpcpDereferenceBlobEx(v11);
            }
            else
            {
              v12 = v15;
              *(_DWORD *)a2 = 48;
              *(_QWORD *)(a2 + 32) = *(_QWORD *)(v12 + 40);
              *(_QWORD *)(a2 + 24) = *(_QWORD *)(v12 + 48);
              v13 = v19;
              *(_QWORD *)(a2 + 40) = 0LL;
              *(_QWORD *)(v13 + 40) = v12;
              AlpcpLockForCachedReferenceBlob(*(_QWORD *)(v12 + 16));
              ++*(_DWORD *)(v12 + 76);
              AlpcpUnlockBlob(*(_QWORD *)(v12 + 16));
            }
            AlpcpDereferenceBlobEx(v11);
          }
        }
      }
    }
    ObfDereferenceObject(Object);
  }
  return (unsigned int)SectionInformation;
}
