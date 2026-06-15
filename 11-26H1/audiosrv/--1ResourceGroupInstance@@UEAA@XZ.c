/*
 * XREFs of ??1ResourceGroupInstance@@UEAA@XZ @ 0x1800F0BE0
 * Callers:
 *     ??_GResourceGroupInstance@@UEAAPEAXI@Z @ 0x1800F13C0 (--_GResourceGroupInstance@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1EndpointInfo@@QEAA@XZ @ 0x1800F0B74 (--1EndpointInfo@@QEAA@XZ.c)
 *     ?SetAssignedResourceGroup@ResourceGroupInstance@@AEAAJH@Z @ 0x1800F52CC (-SetAssignedResourceGroup@ResourceGroupInstance@@AEAAJH@Z.c)
 */

void __fastcall ResourceGroupInstance::~ResourceGroupInstance(ResourceGroupInstance *this)
{
  *(_QWORD *)this = &ResourceGroupInstance::`vftable';
  RmReleaseResources(*((_QWORD *)this + 3));
  ResourceGroupInstance::SetAssignedResourceGroup(this, 0);
  EndpointInfo::~EndpointInfo((ResourceGroupInstance *)((char *)this + 544));
  *((_DWORD *)this + 3) = -1073741823;
}
