/*
 * XREFs of PropertyGetMicArrayGeometryBasicSupport @ 0x1400329D0
 * Callers:
 *     <none>
 * Callees:
 *     GetMicArrayGeometryInfo @ 0x140032148 (GetMicArrayGeometryInfo.c)
 */

__int64 __fastcall PropertyGetMicArrayGeometryBasicSupport(IRP *a1, __int64 a2, __int64 a3)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  unsigned int Options; // ebx
  unsigned int Length; // r14d
  PKSFILTER FilterFromIrp; // rcx
  __int64 result; // rax
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF

  CurrentStackLocation = a1->Tail.Overlay.CurrentStackLocation;
  Options = CurrentStackLocation->Parameters.Create.Options;
  Length = CurrentStackLocation->Parameters.Read.Length;
  FilterFromIrp = KsGetFilterFromIrp(a1);
  if ( Options < 0x20 )
    return 3221225488LL;
  if ( (*(_DWORD *)(a2 + 20) & 0x200) == 0 )
    return 3221225659LL;
  result = GetMicArrayGeometryInfo(FilterFromIrp, *(_DWORD *)(a2 + 24), &v11);
  if ( (int)result >= 0 )
  {
    if ( Length >= 4 )
    {
      *(_DWORD *)a3 = 513;
      a1->IoStatus.Information = 4LL;
      if ( Length >= 0x28 )
      {
        *(_DWORD *)(a3 + 4) = 40;
        *(_QWORD *)(a3 + 24) = 0LL;
        *(_QWORD *)(a3 + 32) = 0LL;
        *(GUID *)(a3 + 8) = GUID_NULL;
        a1->IoStatus.Information = 40LL;
      }
      return 0LL;
    }
    else
    {
      result = 3221225507LL;
      a1->IoStatus.Information = 40LL;
    }
  }
  return result;
}
