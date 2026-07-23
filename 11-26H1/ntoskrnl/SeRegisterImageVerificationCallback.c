/*
 * XREFs of SeRegisterImageVerificationCallback @ 0x140815770
 * Callers:
 *     <none>
 * Callees:
 *     ExRegisterCallback @ 0x1404E9CF0 (ExRegisterCallback.c)
 */

__int64 __fastcall SeRegisterImageVerificationCallback(
        int a1,
        int a2,
        CALLBACK_FUNCTION *a3,
        void *a4,
        __int64 a5,
        _QWORD *a6)
{
  unsigned int v6; // ebx
  bool v7; // zf
  struct _CALLBACK_OBJECT *v8; // rcx
  PVOID v9; // rcx

  v6 = 0;
  if ( a1 == 1 )
  {
    v7 = a2 == 0;
  }
  else
  {
    if ( a1 != 4 )
      return (unsigned int)-1073741585;
    v7 = a2 == 1;
  }
  if ( v7 )
  {
    if ( a5 )
    {
      return (unsigned int)-1073741581;
    }
    else
    {
      v8 = (struct _CALLBACK_OBJECT *)ExCbSeImageVerificationDriverInfo;
      if ( a2 )
        v8 = ExCbSeImageVerificationBlockInfo;
      v9 = ExRegisterCallback(v8, a3, a4);
      if ( v9 )
      {
        _InterlockedIncrement((volatile signed __int32 *)&RtlpBootStatHandleLock.AffinityPrimaryGroup);
        *a6 = v9;
      }
      else
      {
        return (unsigned int)-1073741801;
      }
    }
  }
  else
  {
    return (unsigned int)-1073741584;
  }
  return v6;
}
