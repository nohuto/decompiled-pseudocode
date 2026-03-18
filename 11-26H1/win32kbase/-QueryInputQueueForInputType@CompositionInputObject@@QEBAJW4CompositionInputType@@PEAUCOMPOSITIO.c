/*
 * XREFs of ?QueryInputQueueForInputType@CompositionInputObject@@QEBAJW4CompositionInputType@@PEAUCOMPOSITION_INPUT_QUEUE@@@Z @ 0x14006EFEC
 * Callers:
 *     ?ResolveInputSinkToINPUTDEST@CSpatialProcessor@@KA_NPEAXKPEAUtagINPUTDEST@@@Z @ 0x14006F90C (-ResolveInputSinkToINPUTDEST@CSpatialProcessor@@KA_NPEAXKPEAUtagINPUTDEST@@@Z.c)
 * Callees:
 *     ?UnlockAndRelease@CInputSink@@QEBA_NXZ @ 0x14006F370 (-UnlockAndRelease@CInputSink@@QEBA_NXZ.c)
 *     RIMLockShared @ 0x14006F3F0 (RIMLockShared.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CompositionInputObject::QueryInputQueueForInputType(_QWORD *a1, int a2, __int64 a3)
{
  NTSTATUS v6; // ebp
  int v7; // ebx
  __int64 v8; // rcx
  int v10; // ebx
  int v11; // ebx
  int v12; // ebx

  v6 = ObReferenceObjectByPointer(a1, 3u, ExCompositionObjectType, 0);
  if ( v6 >= 0 )
  {
    RIMLockShared(a1 + 4);
    v6 = 0;
    v7 = a2 - 1;
    if ( v7 )
    {
      v10 = v7 - 1;
      if ( v10 )
      {
        v11 = v10 - 1;
        if ( v11 )
        {
          v12 = v11 - 1;
          if ( v12 )
          {
            if ( v12 != 1 )
              goto LABEL_5;
            v8 = a1[12];
          }
          else
          {
            v8 = a1[11];
          }
        }
        else
        {
          v8 = a1[10];
        }
      }
      else
      {
        v8 = a1[9];
      }
    }
    else
    {
      v8 = a1[8];
    }
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v8 + 40LL))(v8, a3);
LABEL_5:
    CInputSink::UnlockAndRelease((CInputSink *)(a1 + 3));
  }
  return (unsigned int)v6;
}
