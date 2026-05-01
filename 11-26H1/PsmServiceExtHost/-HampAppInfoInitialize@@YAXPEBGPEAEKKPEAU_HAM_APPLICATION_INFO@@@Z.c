/*
 * XREFs of ?HampAppInfoInitialize@@YAXPEBGPEAEKKPEAU_HAM_APPLICATION_INFO@@@Z @ 0x180056D80
 * Callers:
 *     ?HampHostFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_PSM_HOST_INFO@@KW4_HOST_GROUP@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180029A48 (-HampHostFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_PSM_HOST_INFO@@KW4_HOST_GROUP@@PEA.c)
 * Callees:
 *     memset_0 @ 0x1800A28DA (memset_0.c)
 */

void __fastcall HampAppInfoInitialize(
        char *a1,
        unsigned __int8 *a2,
        unsigned int a3,
        int a4,
        struct _HAM_APPLICATION_INFO *a5)
{
  __int64 v9; // rdx
  struct _HAM_APPLICATION_INFO *v10; // rax
  signed __int64 v11; // rbx
  __int16 v12; // cx
  struct _HAM_APPLICATION_INFO *v13; // rcx

  memset_0(a5, 0, 0x218uLL);
  if ( (unsigned __int8)PsmIsValidKey(a1) && a3 >= 0xC && RtlValidSid(a2) )
    RtlLengthSid(a2);
  v9 = 232LL;
  v10 = a5;
  v11 = a1 - (char *)a5;
  do
  {
    if ( v9 == -2147483414 )
      break;
    v12 = *(_WORD *)((char *)v10 + v11);
    if ( !v12 )
      break;
    *(_WORD *)v10 = v12;
    v10 = (struct _HAM_APPLICATION_INFO *)((char *)v10 + 2);
    --v9;
  }
  while ( v9 );
  v13 = (struct _HAM_APPLICATION_INFO *)((char *)v10 - 2);
  if ( v9 )
    v13 = v10;
  *(_WORD *)v13 = 0;
  RtlCopySid(0x44u, (char *)a5 + 464, a2);
  *((_DWORD *)a5 + 133) = a4;
}
