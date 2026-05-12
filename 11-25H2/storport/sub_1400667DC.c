/*
 * XREFs of sub_1400667DC @ 0x1400667DC
 * Callers:
 *     sub_140064B0C @ 0x140064B0C (sub_140064B0C.c)
 * Callees:
 *     sub_140016234 @ 0x140016234 (sub_140016234.c)
 *     sub_140089BB4 @ 0x140089BB4 (sub_140089BB4.c)
 *     memmove @ 0x14013C680 (memmove.c)
 */

__int64 __fastcall sub_1400667DC(CMSPAddress *a1, IRP *a2, _QWORD *a3)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  unsigned int *v4; // r14
  int *p_Type; // rsi
  int v7; // r10d
  unsigned int Options; // edx
  int v9; // r12d
  unsigned __int64 Length; // r8
  int v11; // eax
  int v12; // edi
  char v13; // r15
  unsigned int v14; // eax
  _DWORD *v15; // rbx
  __int64 v16; // rax
  unsigned int v17; // ecx
  unsigned int v18; // ebx
  int v19; // eax
  ULONG v21; // [rsp+40h] [rbp-18h] BYREF
  unsigned int *v22; // [rsp+48h] [rbp-10h] BYREF
  char v25; // [rsp+B0h] [rbp+58h] BYREF
  char v26; // [rsp+B8h] [rbp+60h] BYREF

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v4 = 0LL;
  p_Type = (int *)&a2->AssociatedIrp.MasterIrp->Type;
  v21 = 0;
  v7 = (int)a2;
  v22 = 0LL;
  Options = CurrentStackLocation->Parameters.Create.Options;
  v9 = 1;
  Length = CurrentStackLocation->Parameters.Read.Length;
  *a3 = 0LL;
  v11 = *p_Type;
  v26 = 0;
  v25 = 0;
  if ( v11 == 49 )
  {
    v13 = 0;
    v14 = 72;
  }
  else
  {
    if ( v11 != 67 )
      return (unsigned int)-1073741585;
    v13 = 1;
    v14 = 80;
  }
  if ( Options < v14 )
    return (unsigned int)-1073741585;
  v15 = p_Type + 2;
  if ( v13 )
  {
    if ( *v15 != 1 || p_Type[3] != 72 )
      return (unsigned int)-1073741585;
    v15 = p_Type + 4;
  }
  if ( *v15 && v15[1] && ((v16 = (unsigned int)v15[4], !(_DWORD)v16) || (unsigned int)v16 >= 0x40 && v15[5]) )
  {
    if ( (unsigned int)Length >= 0x48 )
    {
      if ( Length < (unsigned __int64)(unsigned int)v15[5] + v16 + 8 )
        return (unsigned int)-1073741585;
      v12 = sub_140089BB4(*((_QWORD *)a1 + 1), v7, (unsigned int)&v22, (unsigned int)&v21, (__int64)&v26, (__int64)&v25);
      if ( v12 < 0 )
      {
        v4 = v22;
      }
      else
      {
        v4 = v22;
        v12 = sub_140016234(a1, a2, v22, v21, 0LL, v25, 64, 0);
        if ( v12 >= 0 )
        {
          if ( v13 )
            memmove(p_Type + 2, v15, 0x40uLL);
          else
            v9 = 72;
          *p_Type = v9;
          v17 = p_Type[7];
          p_Type[1] = 72;
          p_Type[8] = v4[15];
          if ( v17 )
          {
            if ( v17 >= v4[14] )
              v17 = v4[14];
            v18 = v17;
            memmove((char *)p_Type + (unsigned int)p_Type[6] + 8, (char *)v4 + v4[13] + 36, v17);
            v19 = p_Type[6] + 8;
            p_Type[7] = v18;
            *a3 = v18 + v19;
          }
          else
          {
            *a3 = 72LL;
          }
        }
      }
    }
    else
    {
      if ( (unsigned int)Length < 8 )
        return (unsigned int)-1073741789;
      *p_Type = v13 != 0 ? 1 : 72;
      v12 = 0;
      p_Type[1] = 72;
      *a3 = 8LL;
    }
  }
  else
  {
    v12 = -1073741585;
  }
  if ( v4 )
    ExFreePoolWithTag(v4, 0x72536152u);
  return (unsigned int)v12;
}
