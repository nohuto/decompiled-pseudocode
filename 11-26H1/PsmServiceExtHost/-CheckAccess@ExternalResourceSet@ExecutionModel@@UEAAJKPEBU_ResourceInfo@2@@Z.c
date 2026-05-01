/*
 * XREFs of ?CheckAccess@ExternalResourceSet@ExecutionModel@@UEAAJKPEBU_ResourceInfo@2@@Z @ 0x180089480
 * Callers:
 *     <none>
 * Callees:
 *     ?RmAccessCheckEx@ResourceManager@ExecutionModel@@QEAAJW4Enum@ResourceType@2@KE@Z @ 0x180063550 (-RmAccessCheckEx@ResourceManager@ExecutionModel@@QEAAJW4Enum@ResourceType@2@KE@Z.c)
 */

__int64 __fastcall ExecutionModel::ExternalResourceSet::CheckAccess(
        ExecutionModel::ExternalResourceSet *this,
        unsigned int a2,
        const struct ExecutionModel::_ResourceInfo *a3)
{
  __int64 result; // rax
  unsigned int i; // ebx

  result = 0LL;
  for ( i = 0; i < a2; a3 = (const struct ExecutionModel::_ResourceInfo *)((char *)a3 + 24) )
  {
    result = ExecutionModel::ResourceManager::RmAccessCheckEx(
               *((struct _RM_SERVICE_GLOBALS ***)this + 3),
               *(_DWORD *)a3,
               *((_DWORD *)this + 2));
    if ( (int)result < 0 )
      break;
    ++i;
  }
  return result;
}
