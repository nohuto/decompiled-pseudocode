/*
 * XREFs of sub_14017A9D0 @ 0x14017A9D0
 * Callers:
 *     sub_14017ADA0 @ 0x14017ADA0 (sub_14017ADA0.c)
 * Callees:
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 *     sub_14003E60C @ 0x14003E60C (sub_14003E60C.c)
 *     sub_1400567A0 @ 0x1400567A0 (sub_1400567A0.c)
 */

__int64 __fastcall sub_14017A9D0(struct _UNICODE_STRING *a1, _QWORD *a2, _QWORD *a3)
{
  _WORD *v5; // rbx
  char v6; // bp
  unsigned int v7; // esi
  int DeviceObjectPointer; // edi
  __int64 v9; // rax
  int v10; // eax
  PVOID Object; // [rsp+30h] [rbp-38h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+88h] [rbp+20h] BYREF

  Object = 0LL;
  DeviceObject = 0LL;
  v5 = 0LL;
  v6 = 0;
  v7 = 72;
  DeviceObjectPointer = IoGetDeviceObjectPointer(a1, 0x180u, (PFILE_OBJECT *)&Object, &DeviceObject);
  if ( DeviceObjectPointer >= 0 )
  {
    if ( (unsigned int)sub_1400567A0() && byte_140168467 )
    {
      v7 = 168;
      v6 = 1;
    }
    v9 = sub_1400143E0(64LL, v7, 1917018450LL, 0LL);
    v5 = (_WORD *)v9;
    if ( !v9 )
    {
      DeviceObjectPointer = -1073741670;
      goto LABEL_17;
    }
    if ( v6 )
    {
      v10 = sub_14003E60C(DeviceObject, (ULONG_PTR)&unk_14014A1C8, v7, 2u, v9);
      DeviceObjectPointer = v10;
      if ( v10 >= 0 )
      {
        if ( v5[1] != 2 )
        {
LABEL_10:
          DeviceObjectPointer = -1073741637;
          goto LABEL_17;
        }
        *a3 = v5;
LABEL_16:
        v5 = 0LL;
        goto LABEL_17;
      }
      if ( v10 != -1073741637 )
        goto LABEL_17;
    }
    DeviceObjectPointer = sub_14003E60C(DeviceObject, (ULONG_PTR)&unk_14014A8E0, v7, 1u, (__int64)v5);
    if ( DeviceObjectPointer < 0 )
      goto LABEL_17;
    if ( v5[1] != 1 )
      goto LABEL_10;
    *a2 = v5;
    goto LABEL_16;
  }
LABEL_17:
  if ( Object )
    ObfDereferenceObject(Object);
  if ( v5 )
    ExFreePoolWithTag(v5, 0x72436152u);
  return (unsigned int)DeviceObjectPointer;
}
