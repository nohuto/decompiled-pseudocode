/*
 * XREFs of ??0ResourceSet@ExecutionModel@@AEAA@XZ @ 0x18002C2EC
 * Callers:
 *     ?ResourceSetFactory@ResourceSet@ExecutionModel@@CAJ_KPEAVBaseResourceSet@2@PEAU_RM_ACTIVITY_HOST@@PEAPEAV12@@Z @ 0x1800891B4 (-ResourceSetFactory@ResourceSet@ExecutionModel@@CAJ_KPEAVBaseResourceSet@2@PEAU_RM_ACTIVITY_HOST.c)
 * Callees:
 *     ??0_ResourceSetInfo@ExecutionModel@@QEAA@XZ @ 0x18002B3F0 (--0_ResourceSetInfo@ExecutionModel@@QEAA@XZ.c)
 *     ??0BaseResourceSet@ExecutionModel@@QEAA@XZ @ 0x18002BC08 (--0BaseResourceSet@ExecutionModel@@QEAA@XZ.c)
 */

ExecutionModel::ResourceSet *__fastcall ExecutionModel::ResourceSet::ResourceSet(ExecutionModel::ResourceSet *this)
{
  ExecutionModel::ResourceSet *result; // rax

  ExecutionModel::BaseResourceSet::BaseResourceSet(this);
  *((_QWORD *)this + 164) = 0LL;
  *(_QWORD *)this = &ExecutionModel::ResourceSet::`vftable';
  *((_QWORD *)this + 165) = 0LL;
  *((_DWORD *)this + 332) = 2;
  ExecutionModel::_ResourceSetInfo::_ResourceSetInfo((ExecutionModel::ResourceSet *)((char *)this + 1336));
  *((_QWORD *)this + 214) = 0LL;
  *((_QWORD *)this + 215) = -1LL;
  result = this;
  *((_QWORD *)this + 216) = 0LL;
  *((_DWORD *)this + 333) = 0;
  *((_OWORD *)this + 81) = 0LL;
  return result;
}
