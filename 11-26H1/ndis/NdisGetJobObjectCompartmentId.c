/*
 * XREFs of NdisGetJobObjectCompartmentId @ 0x14003F5E0
 * Callers:
 *     ?ndisNsiGetAllJobInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z @ 0x14003ED20 (-ndisNsiGetAllJobInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z.c)
 *     NdisGetProcessObjectCompartmentId @ 0x14003F1E0 (NdisGetProcessObjectCompartmentId.c)
 *     ?NdisSetJobObjectCompartmentId@@YAJPEAU_EJOB@@I@Z @ 0x140146684 (-NdisSetJobObjectCompartmentId@@YAJPEAU_EJOB@@I@Z.c)
 * Callees:
 *     NdisGetSessionCompartmentId @ 0x14003F6A0 (NdisGetSessionCompartmentId.c)
 */

__int64 __fastcall NdisGetJobObjectCompartmentId(__int64 a1)
{
  unsigned int *JobProperty; // rax
  unsigned int JobSessionId; // eax
  unsigned int v5; // ebx

  JobProperty = (unsigned int *)PsGetJobProperty(a1, 1833133134LL);
  if ( JobProperty )
  {
    v5 = *JobProperty;
    ObfDereferenceObject(JobProperty);
    return v5;
  }
  else
  {
    JobSessionId = PsGetJobSessionId(a1);
    return NdisGetSessionCompartmentId(JobSessionId);
  }
}
